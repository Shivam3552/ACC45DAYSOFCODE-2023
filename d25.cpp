#include<iostream>
using namespace std;

int
main ()
{
    int n,h,x,k,count=0;
    cin>>n>>h>>x;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k+x>=h){
            cout<<"yes"<<endl;
            break;
        }
        count++;
    }
    if(count==n){
        cout<<"no"<<endl;
    }

}
