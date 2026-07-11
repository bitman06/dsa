#include<bits/stdc++.h>

using namespace std ; 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        int p = 0, p2 = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                ans[p] = nums[i];
                p += 2;
            } else {
                ans[p2] = nums[i];
                p2 += 2;
            }
        }

        return ans;
    }
};