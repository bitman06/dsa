#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return false ;

        int ans  = 0 , count = 0 ;
        while(n!=0)
        {
            int a = n % 2 ;
            n = n / 2 ;
            if(a==1)
            {
                count++;
            }
            if(count>1)
            {
                return false ;
            }
        }

        return true ;

    }
};