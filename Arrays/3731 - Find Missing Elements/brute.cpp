#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int diff = nums[0], high = nums.size(), flag = 0;
        vector<int>ans;

        for (int i = 0; i < high; i++) {
            if((nums[i]-i)!=diff){
                flag = 1 ;
                while(diff<nums[i]-i){
                    ans.push_back(i+diff);
                    diff++;
                }
            }
        }

    label: {
        if (flag == 1) {
            return ans;
        } else {
            return {};
        }
    }
    }
};

