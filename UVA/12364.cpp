#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    string braile[10]={".***.."
                        , "*....."
                        , "*.*..."
                        , "**...."
                        , "**.*.."
                        , "*..*.."
                        , "***..."
                        , "****.."
                        , "*.**.."
                        , ".**..."};

    char caso;
    int T;
    while (cin>>T){
        if (T == 0){
            break;
        }
        
        else if (caso == 'S'){
            int z = 0;
            string cad;
            cin>>cad;
            int num;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < T; j++){
                    num = int(cad[j]) - 48;
                    cout<<(braile[num])[z]<<(braile[num])[z+1]<<" ";
                }
                z = z+2;
                cout<<endl;
            }
        }
        else{
            string aux[10], in;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < T; j++){
                    cin>>in;
                    aux[j] = aux[j] + in;
                }
            }
            for (int i = 0; i < T; i++){
                for (int j = 0; j < 10; j++){
                    if (aux[i]==braile[j]){
                        cout<<j;
                    }
                    
                }
                
            }
            cout<<endl;
        }
    }
    
}