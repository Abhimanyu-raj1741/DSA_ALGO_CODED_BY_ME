#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Rotate array by one places ;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];

    int temp=arr[0];

    for(int i=1;i<n;i++)
    	arr[i-1]=arr[i];
    arr[n-1]=temp  ;
   // Time complexity O(N) and space O(1)
   
   for(int j=0;j<n;j++)
   	 cout<<arr[j]<<" ";
 
	return 0;
}