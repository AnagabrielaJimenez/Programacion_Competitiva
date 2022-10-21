#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, aux = 505, n;
    bool j_jump = true;
    while (cin>>n){  
        j_jump = true;
        a = n;
        while (n--){
            cin>>b;
            if (aux != 505){
                if ((abs(a-b) != aux) && (abs(a-b) != aux-1)){
                    j_jump = false;
                    break;
                }
            }
            aux=abs(a-b);
            a=b;
        }
        cout<<(j_jump ? "Jolly":"Not Jolly")<<endl;
        if (j_jump == false){
            break;
        }
        
    }

    return 0;
}