#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int max_d = 505;

void conv_a_numero(int num[], const string &s){
  for( int i = 0 ; i < s.length() ; ++i ){
    num[i] = s[i] - '0';
  }
}

int main(){
  int N;
  while(cin>>N){
    string a, b;
    for( int i = 0 ; i < N ; ++i ){
      cin >> a >> b;

      int numA[max_d] = {0}, numB[max_d] = {0};
      conv_a_numero(numA, a);
      conv_a_numero(numB, b);

      numA[0] += numB[0];
      for( int i = 1 ; i < max_d ; ++i ){
        numA[i] += numB[i] + numA[i-1] / 10;
        numA[i-1] %= 10;
      }

      int up, low;
      for( up = max_d - 1 ; up > 0 && numA[up] == 0 ; --up );
      ++up;
      for( low = 0 ; low < up && numA[low] == 0 ; ++low );

      for( int i = low ; i < up ; ++i ){
        cout<<numA[i];
      }
      cout<<endl;
    }
  }
  return 0;
}