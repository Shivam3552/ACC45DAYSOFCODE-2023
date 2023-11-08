//quick sort
#include<iostream>
using  namespace std;
void quicksort(int arr[],int start,int end){
    if(start>=end-1){
        return ;
    }
    else{
     int ol,ul,pivot,i=start,j=end-1;
     if(arr[start]>arr[end-1]){
           int temp=arr[start];
           arr[start]=arr[end-1];
           arr[end-1]=temp;
     }
     
        pivot=start;
       while(i<j) {
        while(arr[pivot]>=arr[i]){
            i++;
        }
        ul=i;
        while(arr[j]>arr[pivot]){
                  j--;
        }
        ol=j;

          if(ol>ul){
            int temp=arr[ol];
           arr[ol]=arr[ul];
           arr[ul]=temp;
           i=start;
           j=end-1;
          }
        } 

        int temp=arr[ol];
           arr[ol]=arr[pivot];
           arr[pivot]=temp;
           quicksort(arr,start,ol);//left
           quicksort(arr,ol+1,end);//right
     }
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the value in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n);
    
    cout<<"element are there "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
