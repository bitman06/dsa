#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
void merge (vector<int>& nums , int l , int m , int h)
{
    vector <int> temp(h-l+1);
    int i = l , j = m+1 , k = 0 ;
    while(i <= m && j <= h)
    {
        if(nums[i]<nums[j])
        temp[k++] = nums[i++];
        else
        temp[k++] = nums[j++];
    }
    while(i <= m)
    {
        temp[k++] = nums[i++];
    }
    while(j <= h)
    {
        temp[k++] = nums[j++];
    }

    for(int x = 0 ; x < k ; x++)
    {
        nums[l+x] = temp[x];
    }
}
    void sortColors(vector<int>& nums) {
        int n = nums.size() ;

        for(int p = 1 ; p < n ; p = p*2)
        {
            for(int i = 0 ; i < n - p ; i += 2 * p)
            {
                int l = i ;
                int m = i + p - 1 ;
                int h = min(i + 2 * p - 1 , n - 1) ;
                merge(nums,l,m,h); 
            }
        }
    }
};