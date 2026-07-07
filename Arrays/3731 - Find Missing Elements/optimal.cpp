#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = nums[0] , max = nums[0] ;

        for(int i = 0 ; i < nums.size() ; i++){
            if(max<nums[i])max = nums[i];
            if(min>nums[i])min = nums[i];
        }
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        for(int i = min ; i < max ; i++){
            if(s.find(i)==s.end())ans.push_back(i);
        }
        return ans;
    }
};