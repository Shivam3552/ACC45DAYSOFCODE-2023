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
cin>>n;
int a[n],b[n],c=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
    if(i==0){
        if(a[i]-0>=b[i]){
            c++;
        }
    }
    else{
        if(a[i]-a[i-1]>=b[i]){
            c++;
        }
    }
}
cout<<c<<endl;
   i++;   

}

}
