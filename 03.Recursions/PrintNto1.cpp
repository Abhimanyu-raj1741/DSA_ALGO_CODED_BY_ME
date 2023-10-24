#include<bits/stdc++.h>

using namespace std;

void printno(int n)
{   cout<<n<<" ";
	if(n==1)
		return ;
	printno(n-1);
	
}

int main()
{

    int n;
    cin>>n;
    printno(n);




	return 0;
}