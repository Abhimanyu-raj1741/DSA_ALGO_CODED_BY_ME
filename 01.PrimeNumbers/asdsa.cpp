#include<bits/stdc++.h>

#define int long long int
#define F first
#define S seond
#define pb push_back


using namespace std;
int UniqueNo(vector<int> arr)
{
        int n=arr.size();
        int cu_xor=0;
        for (int i=0;i<n;i++)
        {
        	cu_xor=cu_xor^arr[i];
        }
        return cu_xor;
}

int32_t main()     //int32_t converting Longlong int to 32bit
{
    
   vector<int> arr={9,3,5,4,3,4,5};
    cout<<UniqueNo(arr);

	return 0;
}