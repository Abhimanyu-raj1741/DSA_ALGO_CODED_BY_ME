#include<bits/stdc++.h>

using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
    
    }
int main()
{

    int target=9;
    vector<int> nums={2,7,11,15,3,6};
    
         vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        cout<<"[";
        for(auto i:v)
        	{  if(i!=*(v.end()) && i!=*(v.begin()))
              	 cout<<" ";
        		cout<<i;
              if(i==*(v.end()-1))
              	 cout<<"]"<<endl;
            }
       


	return 0;
}