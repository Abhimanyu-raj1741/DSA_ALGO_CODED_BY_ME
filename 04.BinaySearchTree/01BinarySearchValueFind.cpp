#include<bits/stdc++.h>

using namespace std;

    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high)
        {   int mid=(low+high)/2;
            if(nums[mid]==target)
              return mid;
            else if(nums[mid]<target)
              low = mid+1;
            else 
              high = mid-1;  

        }
      return -1;
    }

int main()
{

   vector<int> nums={-1,0,3,5,9,12};
   int target=9;
   cout<<"Found at index -> "<<search(nums,target);


	return 0;
}