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
      
int l,r,m;
cin>>l>>r>>m;
if(m%l==0){
    cout<<(m/l)+(m/r)<<endl;
}
else{
    cout<<(m/l)+1+(m/r)<<endl;
}

i++;


}

}

