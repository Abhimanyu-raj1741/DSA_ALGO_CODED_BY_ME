#include<bits/stdc++.h>

using namespace std;
 bool checking(int i,int n,string s)
 {
 	if(i>=n/2)
 		return true;
 	else if(s[i]!=s[n-i])
 		return false ;
    else 
         checking(i+1,n,s);
   
 }

int main()
{

    string s;
    cin>>s;
    int i=0,n=s.size()-1;
    if(checking(i,n,s))
    	cout<<"THE Input is Pallindrome"<<endl;
    else 
      cout<<"THE Input is not Pallindrome"<<endl;



	return 0;
}