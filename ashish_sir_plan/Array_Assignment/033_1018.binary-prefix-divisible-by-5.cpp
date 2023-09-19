/*
 * @lc app=leetcode id=1018 lang=cpp
 *
 * [1018] Binary Prefix Divisible By 5
 */

// @lc code=start
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        int x = nums[0];
        vector<bool> b;
        if(x==0)
            b.push_back(true);
        else
            b.push_back(false);
        int size = nums.size();
        for(int i=1;i<size;i++)
        {
            x = (2*x) + nums[i];
            x%=5;
            if(x==0)
                b.push_back(true);
            else
                b.push_back(false);
        }
        return b;
    }
};
// @lc code=end

