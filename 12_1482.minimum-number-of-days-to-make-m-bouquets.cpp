/*
 * @lc app=leetcode id=1482 lang=cpp
 *
 * [1482] Minimum Number of Days to Make m Bouquets
 */

// @lc code=start
class Solution {
public:
    bool ispossible(vector<int>& bloomDay,int mid, int m, int k)
    {
        int sum=0,bouquet=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                ++sum;
                if(sum>=k)
                {
                    sum=0;
                    ++bouquet;
                }
            }
            else
                sum=0;
        }
        if(bouquet>=m)
            return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min = *min_element(bloomDay.begin(),bloomDay.end());
        int max = *max_element(bloomDay.begin(),bloomDay.end());

        int start = min, end = max, ans = -1;
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(ispossible(bloomDay,mid,m,k))
            {
                ans = mid;
                end = mid-1;
            }
            else
                start = mid+1;
            mid = start + (end-start)/2;
        }
        return ans;
    }
};
// @lc code=end

