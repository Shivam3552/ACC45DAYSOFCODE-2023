
#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  
int t;
  
cin >> t;
  
int j = 0;
  
while (j < t)
    {
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/4;
    cin>>k;
    int val=arr[k-1];
    sort(arr,arr+size);
    for(int i=0;i<n;i++){
        if(val==arr[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    
j++;
      

}

}
