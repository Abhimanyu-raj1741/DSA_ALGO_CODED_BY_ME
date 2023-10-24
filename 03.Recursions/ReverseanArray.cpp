#include<bits/stdc++.h>

using namespace std;
void rever(int arr[],int low,int high)
{
	if(low>=high)
		return ;
	
	  	swap(arr[low],arr[high]); 

	    rever(arr,low+1,high-1);
           
	  
}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
     int low=0,high=n-1;

     rever(arr,low,high);
    
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";



	return 0;
}