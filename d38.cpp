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
        int n,a,b,count=0;
        cin>>n>>a>>b;
        char s[n];
        for(int j=0;j<n;j++){
            cin>>s[j];
            if(s[j]=='0'){
                count=count+a;
            }
            else{
                count=count+b;
            }
        }
        cout<<count<<endl;
 
i++;
}

}
