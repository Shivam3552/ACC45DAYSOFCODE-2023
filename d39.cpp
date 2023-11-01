#include<iostream>
using namespace std;
struct score{
    int data;
    int marks;
};

int
main ()
{
  
int t;
  
cin >> t;
  
int j = 0;
  
while (j < t)
    {
 int n;
 cin>>n;
 struct score a[n];int max1,max2,max3,max4,max5,max6,max7,max8;
 max1=max2=max3=max4=max5=max6=max7=max8=0;
 for(int i=0;i<n;i++){
     cin>>a[i].data>>a[i].marks;
 }
 for(int i=0;i<n;i++){
     if(a[i].data==1){
         if(a[i].marks>=max1){
             max1=a[i].marks;
         }
     }
     else if(a[i].data==2){
         if(a[i].marks>=max2){
             max2=a[i].marks;
         }
     }
     else if(a[i].data==3){
         if(a[i].marks>=max3){
             max3=a[i].marks;
         }
     }
     else if(a[i].data==4){
         if(a[i].marks>=max4){
             max4=a[i].marks;
         }
     }
     else if(a[i].data==5){
         if(a[i].marks>=max5){
             max5=a[i].marks;
         }
     }
     else if(a[i].data==6){
         if(a[i].marks>=max6){
             max6=a[i].marks;
         }
     }
    else  if(a[i].data==7){
         if(a[i].marks>=max7){
             max7=a[i].marks;
         }
     }
     else if(a[i].data==8){
         if(a[i].marks>=max8){
             max8=a[i].marks;
         }
     }
 }
 cout<<max1+max2+max3+max4+max5+max6+max7+max8<<endl;

      
j++;
}

}
