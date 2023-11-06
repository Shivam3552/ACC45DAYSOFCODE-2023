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
int l;
cin>>l;
string str;
cin>>str;
for(int i=0;i<l-1;i=i+2){
    char ch;
    ch=str[i];
    str[i]=str[i+1];
    str[i+1]=ch;
}
for(int i=0;i<l;i++){
    int a=str[i];
   if(a<=109){
      char b=a+(25-(a-97)*2);
       str[i]= b;
   }
   else{
       char b=a-(25-(122-a)*2);
       str[i]=b;
   }
        
}
cout<<str<<endl;
i++;
}

}
