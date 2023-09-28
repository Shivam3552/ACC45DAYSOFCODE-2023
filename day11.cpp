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
      
int n, flag = 0, count, max = 0;
      
cin >> n;
      
int arr[n];
      
for (int i = 0; i < n; i++)
	{
	  
cin >> arr[i];
      
} 
for (int i = 0; i < n; i++)
	{
	  
flag = 0;
	  
for (int j = i - 1; j >= 0; j--)
	    {
	      
if (arr[i] == arr[j])
		{
		  
flag = 1;
		  
break;
		
}
	    
}
	  
if (flag == 0)
	    {
	      
count = 0;
	      
for (int k = i; k < n; k++)
		{
		  
if (arr[i] == arr[k])
		    {
		      
count++;
		    
}
		
}
	      
if (max < count)
		{
		  
max = count;
		
}
	    
}
	  
 

	
}
      
 cout << n - max<<endl;
 
i++;
    
 
 
}

 
}


