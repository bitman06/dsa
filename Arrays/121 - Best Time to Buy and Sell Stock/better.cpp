#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 1, n = prices.size(), mp = 0, bs = prices[0];

        while (j < n) {
            if (prices[i] > prices[j]) {
                bs = prices[j];
                i = j;
                j = i + 1;
            } else {
                int d = prices[j] - bs;
                if (d > mp)
                    mp = d;
                j++;
            }
        }

        return mp;
    }
};