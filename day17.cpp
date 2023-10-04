#include<iostream>
using namespace std;

int
main ()
{
  
int t;
  
cin >> t;
  
int k = 0;
  
while (k < t)
    {
      
int n;
cin>>n;
int a[n],b[n],c1=0,c2=0,m1=0,m2=0,i;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    cin>>b[i];
}
   for(i=0;i<n;i++){
        if(a[i]==0||i==n-1){
        if(m1<c1){
            m1=c1;
        } 
        c1=0;
        }
    else{
        c1++;
    }
}   
for( i=0;i<n;i++){
    if(b[i]==0||i==n-1){
        if(m2<c2){
            m2=c2;
        } 
        c2=0;
    }
    
    else{
        c2++;
    }
}   
if(m1>m2){
cout<<"Om"<<endl;
}
else if(m2>m1){
cout<<"Addy"<<endl;
}
else{
    cout<<"Draw"<<endl;
}
k++;

}

}
