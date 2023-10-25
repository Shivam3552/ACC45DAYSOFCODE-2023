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
      
int s,x,y,z;
cin>>s>>x>>y>>z;
if(s-(x+y)>=z){
    cout<<0<<endl;
}
else if(s-(x+y)+x>=z||s-(x+y)+y>=z){
    cout<<1<<endl;
}
else if(s-(x+y)+(x+y)>=z){
    cout<<2<<endl;
}
 i++;;     

}

}

