#include<bits/stdc++.h>

using namespace std;
void reverse(int sum[],int x,int y)
{
   reverse(sum,sum+x);
   reverse(sum+x,sum+y);
   reverse(sum,sum+y);
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
     int d;
     cin>>d;
    reverse(arr,d,n);
     for(int i=0;i<n;i++)
     	cout<<arr[i]<<" ";



	return 0;
}