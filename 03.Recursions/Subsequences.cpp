#include<bits/stdc++.h>

using namespace std;
// subsequence of [3,1,2]
// 3 1 , 3 2, 3 1 2,  1 2 , 3, 1 ,2  all will be in relative order
// _ _ _ take ,not take ,take 3,_,2
void printf(int ind,vector<int> &ds,int arr[],int n)
{
     if(ind ==n ){
     	for(auto it:ds)
     	{
     		cout<<it<<" ";
     	}
     	 cout<<endl;
     	 return;
     }
    // take or pick the particular index into the subsequences
     ds.push_back(arr[ind]);
     printf(ind+1,ds ,arr,n);
     ds.pop_back();
    // not pick , or not take condition ,this element is not added to your subsequence 
     printf(ind+1,ds,arr,n);

}



int main()
{

    int arr[]={3,1,2};
    int n =3;
    vector<int> ds;
    printf(0,ds,arr,n);




	return 0;
}