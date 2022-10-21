#include <iostream>
#include <vector>

using namespace std;

int main(){
    int casos, inst, posit, as;
    string mov;
    cin>>casos;
    for (int i = 0; i < casos; i++){
        vector<int> inst_ant;
        cin>>inst;
        posit=0;
        while (inst--){
            cin>>mov;
            if (mov[i]=='L'){
                posit--;
                inst_ant.push_back(-1);
            }
            else if (mov[i]=='R'){
                posit++;
                inst_ant.push_back(1);
            }
            else{
                string trash;
                cin>>trash;
                cin>>as;
                if (as <= inst_ant.size()){
                    posit=posit+inst_ant[as-1];
                }
            }
        }
        cout<<posit<<endl;
    }
    
}