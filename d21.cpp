#include<iostream>
using namespace std;

int
main()
{
  
int t;
  
cin >> t;
  
int i = 0;
  
while (i < t)
    {
     int x,a,b,c;
     cin>>x>>a>>b>>c;
     if(a>=b&&a>=c){
         if(b>=c){
             cout<<b+c*(x-1)<<endl;
         }
         else{
             cout<<c+b*(x-1)<<endl;
         }
     }
     else if(b>a&&b>c){
         if(a>c){
             cout<<a+c*(x-1)<<endl;
         }
         else{
             cout<<c+a*(x-1)<<endl;
         }
     }
      else if(c>b&&a<c){
         if(b>a){
             cout<<b+a*(x-1)<<endl;
         }
         else{
             cout<<a+b*(x-1)<<endl;
         }
     }
     
     
     
     

i++;
      

}

}
