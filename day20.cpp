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
      
int N,K;
cin>>N>>K;
if(N%5!=0){
    if(K%5!=0){
cout<<(N/5+1)-(K/5+1)<<endl;
}
else{
    cout<<(N/5+1)-(K/5)<<endl;
}
}
else{
   if(K%5!=0){
cout<<(N/5)-(K/5+1)<<endl;
}
else{
    cout<<(N/5)-(K/5)<<endl;
}

}     
i++;

}
return 0;

}
