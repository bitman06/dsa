#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;

        int e;

        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                e = nums[i];
                count = 1;
            } else {
                if (nums[i] == e) {
                    count++;
                } else
                    count--;
            }
        }

        return e;
    }
};