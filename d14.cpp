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
      
int X,Y,Z;
cin>>X>>Y>>Z;
if(Z-Y==X||Y-Z==X||Y+Z==X){
 cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
 i++;

}

}
