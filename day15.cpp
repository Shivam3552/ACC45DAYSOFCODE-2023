#include <iostream>
using namespace std;

int main() {
	int i=0,t;
	cin>>t;
	while(i<t){
	    int N,height,max=-1;
	    cin>>N;
	    for(int j=0;j<N;j++){
	        cin>>height;
	        if(max<height){
	            max=height;
	        }
	        
	    }
	    cout<<max<<endl;
	    
	    
	    
	    i++;
	}
	return 0;
}
