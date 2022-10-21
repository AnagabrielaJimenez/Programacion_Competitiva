#include <iostream>

using namespace std;

int main(){
    int casos, vel, v, max;
    cin>>casos;
    for (int i = 1; i <= casos; i++){
        cin>>vel;
        max = 0;
        while (vel--){
            cin>>v;
            if (v>max){
                max=v;
            }
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    
    return 0;
}