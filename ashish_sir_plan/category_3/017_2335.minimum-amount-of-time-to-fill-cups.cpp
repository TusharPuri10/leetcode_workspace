/*
 * @lc app=leetcode id=2335 lang=cpp
 *
 * [2335] Minimum Amount of Time to Fill Cups
 */

// @lc code=start
class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(),amount.end(),greater<>());
        int count=0;
        while(amount[0]!=0)
        {
            if(amount[0]>0 && amount[1]>0)
            {
                --amount[0];
                --amount[1];
            }
            else
            {
                --amount[0];
            }
            ++count;
            sort(amount.begin(),amount.end(),greater<>());
        }
        return count;
    }
};
// @lc code=end

