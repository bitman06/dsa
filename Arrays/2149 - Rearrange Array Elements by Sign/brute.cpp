#include<bits/stdc++.h>

using namespace std ; 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        vector <int> positive;

        vector <int> negative;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]>=0)
            {
                positive.push_back(nums[i]);
            }
            else
            negative.push_back(nums[i]);
        }
        int p = 0 , p2 = 1 ;
        for(int i = 0 ; i < positive.size() ; i++)
        {
            ans[p] = positive[i];
            p+=2;
        }

        for(int i = 0 ; i < negative.size() ; i++)
        {
            ans[p2] = negative[i];
            p2+=2;
        }

        return ans ;
    }
};