#include<iostream>
using namespace std;
int m(int a,int b,int c){
    int sum=0;
    if(a>=b&&a>=c){
        sum=sum+a*10*10;
        if(b>=c){
            sum=sum+b*10+c;
        }
        else{
            sum=sum+c*10+b;
        }
        
    }
   else if(b>=a&&b>=c){
        sum=sum+b*10*10;
        if(a>=c){
            sum=sum+a*10+c;
        }
        else{
            sum=sum+c*10+a;
        }
    }
     else if(c>=a&&c>=b){
        sum=sum+c*10*10;
        if(a>=b){
            sum=sum+a*10+b;
        }
        else{
            sum=sum+b*10+a;
        }
    }
    
    
    return sum;
}

int
main ()
{
  
int t;
  
cin >> t;
  
int i = 0;
  
while (i < t)
    {
  int a1,a2,a3,b1,b2,b3;
  cin>>a1>>a2>>a3>>b1>>b2>>b3;
  if( m(a1,a2,a3)> m(b1,b2,b3)){
      cout<<"Alice"<<endl;
  }
  else if( m(a1,a2,a3)< m(b1,b2,b3)){
      cout<<"Bob"<<endl;
  }
  else if(m(a1,a2,a3)==m(b1,b2,b3)){
      cout<<"Tie"<<endl;
  }
  
  i++;    

}

}
