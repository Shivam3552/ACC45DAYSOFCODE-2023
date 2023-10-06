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
      
int x,y,count;
cin>>x>>y;
for(int i=x;i<=y;i++){
    count=0;
    for(int j=2;j<=i/2;j++){
       if(i%j==0){
        count=1;
        break;
       }
    }
    if(count==1){
        cout<<i<<endl;
    }
}

}

}
