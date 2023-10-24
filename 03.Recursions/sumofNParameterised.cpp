#include<bits/stdc++.h>

using namespace std;
  int summ(int n ,int sum)
  {
  	if(n==0)
  		return sum;
  	summ(n-1,sum+n);

  }
 
int main()
{

    int n;
    cin>>n;
    int sum=0;
    cout<<summ(n,sum);



	return 0;
}