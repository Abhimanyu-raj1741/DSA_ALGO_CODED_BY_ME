#include<bits/stdc++.h>

using namespace std;
 int ans(int n,int r )
 {     int res=1;
 	   for(int i=0;i<r;i++)
 	   {
            res=res*(n-i);
            res=res/(i+1);
 	   }
 	   return res;
 }

int main()
{
   // if we want to data of particalr Row and column of the pascal triangle
   // 5th row = 1 4 6 4 1   3rd column that will be 6 
   // how to calculate then here is code 
   //  ncr where n = row and r =column 
	// we subtract 1 from both  it will become 4c2 answer will 6
	// fromula    4!
	//         2!x(4-2)!
   // striver shortcut for ncr 4X3/2X1   upper 4 will only  upto r times 
   int n,r;
   // Taking column of the triangle
   cin>>n;
   // Taking row of the triangle
   cin>>r;
   cout<<ans(n-1,r-1);
   


	return 0;
}