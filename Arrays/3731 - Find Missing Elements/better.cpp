#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans ;
        int max = INT_MIN , min = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(max<nums[i])
            max = nums[i];
            if(min>nums[i])
            min = nums[i];
        }
        int hash[101];

        for(int i = 0 ; i < nums.size() ; i++)
        {
            hash[nums[i]]++;
        }

        for(int i = min ; i < max ; i++)
        {
            if(hash[i]==0)
            ans.push_back(i);
        }

        return ans;
    }
};