/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    bool ispossible(vector<int>& piles, int h, long long k)
    {
        long long hours=0;
        for(int i=0;i<piles.size();i++)
        {
            int x = (piles[i]<=k)?(1):(piles[i]/k + ((piles[i]%k==0)?(0):(1)));
            hours = hours +  x;
        }
        if(hours>h)
            return false;
        else
            return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        //binary search
        //search space
        // start = 0 end = max
        // we want minimum k
        // so we will check mid
        // if mid possible then we go left else we go right
        // for possibility we will check if k speed can finish all bananas in h hours
        /// zaroori nhi start me hamesha 0 ya 1 ya min hi aaye
        long long start = 1, end = *max_element(piles.begin(),piles.end());
        long long mid = start + (end-start)/2;
        long long ans=1;
        while(start<=end)
        {
            cout<<start<<" "<<end<<endl;
            if(ispossible(piles,h,mid))
            {
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;

    }
};
// @lc code=end

