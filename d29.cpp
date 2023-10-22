#include<iostream>
using namespace std;

int
main ()
{
  
int t;
  
cin >> t;
  
int i = 0;
  
while (i < t)
    {
int n,x,y,z;
cin>>n>>x>>y>>z;
if(n==x||n==y||n==z||n==x+y||n==y+z||n==x+z||n==x+y+z){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
i++;
      

}

}
