#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T>0)
	{
	    int count=0,a,sq;;
	    cin>>N;
	    while(N>0)
        {    
	        sq=sqrt(N);
	        a=N-(sq*sq);
	        count++;
	        N=a;
        }
        cout<<count<<endl;
        T--;
	}
	return 0;
}
