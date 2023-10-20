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
 int n,count,k;
 count=0;
 cin>>n;
 char b[n];
 k=120-n;
 cin>>b;
 
 for(int j=0;j<n;j++){
     
     if(b[j]=='1'){
         count++;
     }
 }
 if((k+count)>=90){
     cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
      
i++;
}

}
