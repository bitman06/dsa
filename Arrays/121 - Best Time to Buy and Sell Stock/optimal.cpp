#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minim = prices[0];
        int mprofit = 0;
        int size = prices.size();

        for (int i = 1; i < size; i++) {
            int stock = prices[i] - minim;
            mprofit = max(mprofit, stock);
            minim = min(minim, prices[i]);
        }

        return mprofit;
    }
};