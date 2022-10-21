#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define LL long long

const int maxn = 10010000;
LL n, m;
LL a[maxn];

int main() {
    while(cin >> n >> m) {
        if(n == m && n == 0)
            break;
        LL x, cnt = 0;
        memset(a, 0, sizeof(a));
        for(LL i = 0; i < n; i++) {
            cin >> x;
            a[x] = 1;
        }
        for(LL i = 0; i < m; i++) {
            cin >> x;
            if(a[x])
                cnt++;
        }
        cout << cnt << endl;
    }
}