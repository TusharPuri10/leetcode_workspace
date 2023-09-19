/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */

// @lc code=start
class Solution {
public:
    bool ispossible(vector<int>& weights,int max_weight, int days)
    {
        int sum=0;
        int k=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            if(sum>max_weight)
            {
                ++k;
                sum=0;
                --i;
            }
            if(k>days)
                return false;
        }
        ++k;
        if(k>days)
            return false;
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //minimum find
        int min = *min_element(weights.begin(),weights.end());
        //sum find
        int sum=0;
        for(auto &value: weights)
            sum+=value;
        int start = min,end = sum;
        int min_weight_capacity = start + (end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if(ispossible(weights,min_weight_capacity,days))
            {
                ans = min_weight_capacity;
                end = min_weight_capacity-1;
            }
            else
            {
                start = min_weight_capacity+1;
            }
            min_weight_capacity = start + (end-start)/2;
        }
        return ans;
    }
};
// @lc code=end

