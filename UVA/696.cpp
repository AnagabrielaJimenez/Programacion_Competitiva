#include <iostream>

using namespace std;

int main(){
    int m,n, out;
    while (cin>>m>>n){
        if (m==0 && n==0){
            break;
        }
        else if (m>n){
            swap(m,n);
        }
        else if (m==1){
            out = n;
        }
        else if (m==2){
            out = ((n >> 2) << 2) + ((n &= 3) < 3 ? n << 1 : 4);
        }
        else{
            out = (m*n+1) >> 1;
        }
        cout<<out<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
    }
    
}