#include<iostream>
#include<string.h>
using namespace std;

int
main ()
{
  
int t;
  
cin >> t;
  
int i = 0;
  
while (i < t){
 string s;
 int count=0;
 cin>>s;
 for(int j=0;j<s.length();j++){
     if(s[j]=='<'){
         s[j]='>';
     }
     else if(s[j]=='>'){
         s[j]='<';
     }
 }
 for(int j=0;j<s.length();j++){
     if(s[j]=='>'){
         if(s[j+1]=='<'){
             count++;
         }
     }
 }
 cout<<count<<endl;
      
i++;
}

}
