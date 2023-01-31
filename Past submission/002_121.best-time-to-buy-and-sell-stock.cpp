/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& a) {
        // we are finding max profit i.e.
        // max difference between the element we are at
        // and the lowest element encountered before it
        // if else if ensures that min ke milne ke baad hi uske aage ke profit ko compare karna hai
        int min=a[0],max_profit=0;
        for(int i = 1; i < a.size();i++)
        {
            if(a[i]<min)
                min = a[i];
            else if(a[i]-min>max_profit)
                max_profit = a[i]-min;
        }
        return max_profit;
    }
};
// @lc code=end

