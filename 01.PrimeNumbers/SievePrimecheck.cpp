#include<bits/stdc++.h>

using namespace std;
int N=100000000;
bool sieve[100000001];
void createSieve(){
	for(int i=2;i*i<=N;i++){
		sieve[i]=true;
	}
	for(int i=2;i<=N;i++){
		if(sieve[i]==true){
			for(int j=i*i;j<=N;j+=i)
				sieve[j]=false;
		}
	}
	int limit =5*1000000;
	int cnt=0;
	int size=1;
	for(int i=2;;i++){
		if(sieve[i]==true)
			cnt++;
		if(cnt==limit)
		{
			size=i;
			break;
		}
	}
	cout<<size<<endl;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
    	createSieve();
        for(int i=0;i<=n;i++){
        	if(sieve[i])
        		cout<<i<<" ";
        }
    
    }


	return 0;
}