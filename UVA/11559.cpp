#include <iostream>

using namespace std;

int main(){
    int part, pres, n_h, n_s, aux, min, cost_h, camas_d;

    while (cin>>part>>pres>>n_h>>n_s){
        min = pres+1;
        while (n_h--){
            cin>>cost_h;
            for (int i = 0; i < n_s; i++){
                cin>> camas_d;
                if (camas_d >= part){
                    aux = cost_h*part;
                    if (aux < min){
                        min = aux;
                    }
                }
            }
        }
        if (min<=pres){
            cout<<min<<endl;
        }
        else{
            cout<<"stay home"<<endl;
        }
    }
    
}