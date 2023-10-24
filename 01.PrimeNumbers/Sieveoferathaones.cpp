#include<bits/stdc++.h>

using namespace std;

int main()
{

     	  int n;
     	  cin>>n;
   	    	vector<bool>vis(n+1, true); // Create a boolean array to mark prime numbers
   		long long int sum = 0; // Initialize sum as 0

   		// Finding all prime numbers using Sieve of Eratosthenes algorithm
   		// why i*i because all number between sqrt(n) .... n whos not divide that occur only one time Rule 
   		for(int i = 2; i * i <= n; i++){
   			if(vis[i]){
   				for(int j = i*i; j <= n; j+=i){
   					vis[j] = false; // Mark multiples of i as false
   				}
   			}
   		}

   		// Calculating sum of prime numbers
   		for(int i = 2; i <= n; i++)
   		{	if(vis[i])
   		   {		sum += i;
   		             cout<<i<<" ";


   		    }
   		    				

   		    } // Adding prime numbers to sum
         cout<<endl;

   		cout<<"Sum = "<<sum<<endl;




	return 0;
}