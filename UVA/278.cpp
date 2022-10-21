#include <iostream>

using namespace std;

int main(){
    int prob, m, n, out;
	char p;
	int q[5] = {0, 1, 1, 2, 3};

	cin>>prob;
	while(prob--)
	{
		cin>>p>>m>>n;
        if (p=='r'){
            out = m>n ? n : m;
        }
        else if (p=='k'){
            out = (m*n+1) >> 1;
        }
        else if (p=='Q'){
            m = m<n ? m : n;
            out = m>4 ? m : q[m];
        }
        else{
            out = ((m + 1) >> 1) * ((n + 1) >> 1);
        }
        
		cout<<endl<<out;
	}
	return 0;
}