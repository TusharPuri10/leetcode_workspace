/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=0;
        int max_profit=0;
        int size = prices.size();
        for(int i=0;i<size;i++)
        {
            if(prices[i]<prices[min])
                min = i;
            else if(max_profit < prices[i]-prices[min])
                max_profit = prices[i]-prices[min];
        }
        return max_profit;
    }
};
// @lc code=end

