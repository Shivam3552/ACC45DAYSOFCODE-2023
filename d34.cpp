#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  
int t;
  
cin >> t;
int k = 0;
  
while (k < t)
    {
      
int i=0,j,c=0,d=0;
string s;
cin>>s;

while(i<s.length()){
   if(s[i]=='U'){
       j=i+1;
       while(s[i]==s[j]){
         j=j+1;  
       }
       c=c+1;
       i=j;
   } 
   else if(s[i]=='D'){
       j=i+1;
       while(s[i]==s[j]){
         j=j+1;  
       }
       d=d+1;
       i=j;
   }
}
if(c>d){
    cout<<d<<endl;
}
else{
     cout<<c<<endl;
}
k++;
}
      

}


