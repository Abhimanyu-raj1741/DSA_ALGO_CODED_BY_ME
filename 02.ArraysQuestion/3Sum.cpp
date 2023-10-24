#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr={-1,-1,2,0,1};
    
    set<vector<int>> st;

    for(int i=0;i<arr.size();i++)
  {   
  	set<int> hashset;
  	for(int j=i+1;j<arr.size();j++)
  	{   
  		
  	 	int third=-(arr[i]+arr[j]);
  		if(hashset.find(third)!=hashset.end())
  		{
  			vector<int> tmp={arr[i],arr[j],third};
            sort(arr.begin(),arr.end());
            st.insert(tmp);

  		}
  		hashset.insert(arr[j]);
  	}
  }
vector<vector<int>> ans(st.begin(),st.end());

 for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
 }
	return 0;
}