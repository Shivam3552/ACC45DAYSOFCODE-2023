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
      
int X;
cin>>X;
if(X%3==0){
    cout<<0<<endl;

}
else{
    cout<<3-X%3<<endl;
}
  i++;    

}

}
