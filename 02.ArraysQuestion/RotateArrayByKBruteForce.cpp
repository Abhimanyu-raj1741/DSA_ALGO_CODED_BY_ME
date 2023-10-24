#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Rotate array by k places brute force approach ;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
 
    int d;
    cin>>d;
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i]=arr[i];
    
    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];

    for(int i=0;i<d;i++)
        arr[n-d+i]=temp[i];
   // Time complexity O(N) and space O(1)
   
   for(int j=0;j<n;j++)
   	 cout<<arr[j]<<" ";
 
	return 0;
}