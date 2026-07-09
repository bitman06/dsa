#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int size = nums.size() , count = 1 , i = 0 ;
        
       for( ; i < size - 1 ; i++)
       {
        if(nums[i] == nums[i+1])
        {
            count++;
        }
        else if (nums[i]!=nums[i+1])
        {
            if(count > size / 2)
            {
                return nums[i] ;
            }
            else
            {
                count = 1 ;
            }
        }
       }
       return nums[size-1];
    }
};