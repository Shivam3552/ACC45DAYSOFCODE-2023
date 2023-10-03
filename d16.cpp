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
      
int n;
//  n IS NO OF cocolate
cin>>n;
for(int i=1;i<=(n-1)/2;i++){
    if(i%2!=0||n-2*i!=0){
        cout<<i<<" "<<i<<" "<<n-2*i<<endl;
        break;
    }
}

      

i++;
      

}

}
