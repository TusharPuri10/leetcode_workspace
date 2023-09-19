/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change;
        int size = bills.size();
        int coins_5=0,coins_10=0;
        for(int i=0;i<size;i++)
        {
            change = bills[i]-5;
            if(change==5)//5
            {
                if(coins_5==0)
                    return false;
                else
                    --coins_5;
                ++coins_10;
            }
            else if(change==15)// 5 5 5 or 10 5
            {
                if(coins_10==0)
                {
                    if(coins_5<3)
                        return false;
                    else
                        coins_5-=3;
                }
                else if(coins_5==0)
                    return false;
                else
                {
                    --coins_10;
                    --coins_5;
                }
            }
            else
            {
                ++coins_5;
            }
        }
        return true;
    }
};
// @lc code=end

