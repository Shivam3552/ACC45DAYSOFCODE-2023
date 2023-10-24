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
int r1,w1,c1,r2,w2,c2,count=0;
cin>>r1>>w1>>c1>>r2>>w2>>c2;
if(r1==r2){
    count++;
}
if(w1==w2){
    count++;
}
if(c1==c2){
    count++;
}

if(count==0){
 if((r1>r2&&w1>w2)||(w1>w2&&c1>c2)||(r1>r2&&c1>c2)){
     cout<<"A"<<endl;
 }  
 else{
     cout<<"B"<<endl;
 }
}
else if(count==1){
    if(r1==r2){
       if(c1>c2&&w1>w2){
           cout<<"A"<<endl;
       }
       else{
           cout<<"B"<<endl;
       }
    }
    else if(w1==w2){
       if(c1>c2&&r1>r2){
           cout<<"A"<<endl;
       }
       else{
           cout<<"B"<<endl;
       }  
    }
    else if(c1==c2){
        if(r1>r2&&w1>w2){
           cout<<"A"<<endl;
       }
       else{
           cout<<"B"<<endl;
       } 
    }
    
}
else if(count==2){
    if(r1>r2||w1>w2||c1>>c2){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
    
}
i++;

}

}
