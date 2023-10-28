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
        int n,count=0;
        cin>>n;
        count=n/7;
        if(n%7>=2){
            count=count+1;
        }
        cout<<count<<endl;
      
i++;
}

}
