#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

using namespace std;

int a[201], s[201];

int main(){
    int N, A;
    while (cin>>N>>A){
        memset(s, 0, sizeof(s));
        memset(a, 0, sizeof(a));
        a[0]=A;
        s[0]=A;
        for (int i = 0; i <= N; i++){
            for (int j = 0; j <= 200; j++){
                a[j] *= A;
            }
            for (int j = 0; j <= 200; j++){
                a[j+1] += a[j]/10;
                a[j] %= 10;
            }
            for (int j = 0; j <= 200; j++){
                s[j] += a[j]*i;
            }
            for (int j = 0; j <= 200; j++){
                s[j+1] += s[j]/10;
                s[j] %= 10;
            }
        }
        int fin = 200;
        while (fin >= 1 && !s[fin]){
            fin--;
        }
        while (fin >= 0){
            cout<<s[fin--];
        }
        cout<<endl;
    }
    
}