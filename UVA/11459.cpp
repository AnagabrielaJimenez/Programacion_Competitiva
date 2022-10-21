#include<iostream>

using namespace std;


int main(){

    int t;

    cin>>t;

    for(int z=1;z<=t;z++){

            int a,b,c;

            cin>>a>>b>>c;

            int jug[1000],tab[101][2],dead[1000];

            for(int i=0;i<=100;i++)

                    for(int j=0;j<2;j++)

                            tab[i][j]=i;

            for(int i=1;i<=b;i++){

                    int x,y;

                    cin>>x>>y;

                    tab[x][0]=x;

                    tab[x][1]=y;

            }

            for(int i=1;i<=c;i++){

                    cin>>dead[i];

            }

            int aux=1;

            for(int i=1;i<=c;i++){

                    jug[aux]+=dead[i];

                    if(tab[jug[aux]])

                    if(aux%a==0)

                    aux=1;
    }

    return 0;

}