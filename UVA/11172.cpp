#include<iostream>

using namespace std;

int main(){
    int x,a,b;
    cin>>x;
    while (x--){
        cin>>a>>b;
        if (a>b){
            cout<<">"<<endl;
        }
        else if (a<b){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    
    return 0;
}