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
  int a,b,s1=1,s2=0 ,a1=1,b1=0;
  cin>>a>>b;
  
  while(1){
    if(b1>a1){
        a1=b1+1;
        s1=s1+a1;
      if(s1>a){
        break;
      }
      
      
    }
    else{
        b1=a1+1;
         s2=s2+b1;
      if(s2>b){
        break;
      }
       
     
    }
    
  }
  if(s1>a){
    cout<<"BOB"<<endl;
  }
  else if(s2>b){
    cout<<"LIMAK"<<endl;
  }



      

i++;
      

}

}
