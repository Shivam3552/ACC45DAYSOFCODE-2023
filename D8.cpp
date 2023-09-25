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
      
int area=-1;
int n,b;
cin>>n>>b;
for(int j=0;j<n;j++){
    int l,w,p;
    cin>>l>>w>>p;
    if(b>=p){
        if(l*w>area){
            area=l*w;
        }
    }
}
if(area==-1){
    cout<<"no tablet";
}
else{
    cout<<area;
}

      

i++;
      

}

}
