#include <iostream>

using namespace std;

int main(){
    string W[10]={"", "1"
                    , "1\n22\n1"
                    , "1\n22\n333\n22\n1"
                    , "1\n22\n333\n4444\n333\n22\n1"
                    , "1\n22\n333\n4444\n55555\n4444\n333\n22\n1"
                    , "1\n22\n333\n4444\n55555\n666666\n55555\n4444\n333\n22\n1"
                    , "1\n22\n333\n4444\n55555\n666666\n7777777\n666666\n55555\n4444\n333\n22\n1"
                    , "1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1"
                    , "1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n999999999\n88888888\n7777777\n666666\n55555\n4444\n333\n22\n1"};

	int casos, freq, ampl;
    cin>>casos;
    while (casos--){
        cin>>ampl>>freq;
        cout<<endl;
        while (freq--){
            cout<<W[ampl]<<endl;
            if (freq){
                cout<<endl;
            }
        }
        if (casos){
            cout<<endl;
        }
    }
    
	return 0;
}