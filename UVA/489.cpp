#include <iostream>

using namespace std;

int main(){
    string pal, intent;
    int ronda;
    while (cin>>ronda){
        int perd = 0;
        if (ronda == -1){
            break;
        }
        else{
            cin>>pal>>intent;
            int coinc = 0;
            cout<<"Round "<<ronda<<endl;
            for (int i = 0; i < intent.size(); i++){
                for (int j = 0; j < pal.size(); j++){
                    if (intent[i] == pal[j]){
                        pal.erase(j,1);
                        coinc = 1;
                    }
                }
                if (pal.empty()){
                    cout<<"You win."<<endl;
                    break;
                }
                if (coinc == 0){
                    perd++;
                }
                coinc = 0;
            }
            if (perd >= 7){
                cout<<"You lose."<<endl;
            }
            if (perd > 0 && perd < 7){
                cout<<"You chickened out."<<endl;
            }
        }
    }
    
}