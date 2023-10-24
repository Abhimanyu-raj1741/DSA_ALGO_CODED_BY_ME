#include<bits/stdc++.h>

using namespace std;

int main()
{
    // How to Find out the Factor with (Sqrt(N)) time coplexity
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<=n;i++)
    {
    	if(n%i==0)
    	{
    		cout<<i<<" ";
    		cnt++;
    		if((n/i)!=i)
    		{
    			cout<<(n/i)<<" ";
    			cnt++;
    		}
    	}
    }
    cout<<endl;
     cout<<"Total Factor Count is : "<<cnt<<endl;



	return 0;
}