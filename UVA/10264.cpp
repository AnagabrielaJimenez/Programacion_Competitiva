#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{  
    int N;
    while (cin >> N)
    {
        vector<int> peso_l;
        for (int cor = 0; cor < 1 << N; ++cor)
        {
            int peso;
            cin >> peso;
            peso_l.push_back(peso);
        }

        vector<int> pot_l;
        for (int cor = 0; cor < 1 << N; ++cor)
        {
            int pot = 0;
            for (int digit = 0; digit < N; ++digit)
                pot += peso_l[cor ^ (1 << digit)] ;
            pot_l.push_back(pot);
        }

        int max_s = 0;
        for (int cor = 0; cor < 1 << N; ++cor)
        {
            for (int digit = 0; digit < N; ++digit)
                max_s = max(max_s, pot_l[cor] + pot_l[cor ^ (1 << digit)]);
        }
        cout << max_s << endl;
    }
    return 0;
}