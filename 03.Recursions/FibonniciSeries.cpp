#include<bits/stdc++.h>

using namespace std;
int  fibb(int n)
{   
	if(n==1 || n==0)
		return n;
	else 
     return (fibb(n-1)+fibb(n-2));
}
int main()
{

    int n;
    int i=0;
    cin>>n;
    while(i<n){
    	cout<<" "<<fibb(i);
    	i++;
    }




	return 0;
}