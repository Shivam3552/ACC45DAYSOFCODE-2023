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
      
int k,sum=0;

for (int j=0;j<5;j++){
    cin>>k;
    sum=sum+k;
}
if(sum==0){
    cout<<"Beginner"<<endl;
}
else if(sum==1){
    cout<<"Junior Developer"<<endl;
}
else if(sum==2){
    cout<<"Middle Developer"<<endl;
}
else if(sum==3){
    cout<<"Senior Developer"<<endl;
}
else if(sum==4){
    cout<<"Hacker"<<endl;
}
else if(sum==5){
    cout<<"Jeff Dean"<<endl;
}
i++;
}

}
