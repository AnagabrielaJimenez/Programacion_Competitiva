#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int ar[2000005];

int main(){

    int n;
    while(scanf("%d",&n)==1 && n){
        for(int i = 0; i < n; i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int i = 0; i < n; i++){
            cout<<ar[i];
            if(i < n-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}