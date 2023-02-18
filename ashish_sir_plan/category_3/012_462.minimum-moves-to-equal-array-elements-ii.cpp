/*
 * @lc app=leetcode id=462 lang=cpp
 *
 * [462] Minimum Moves to Equal Array Elements II
 */

// @lc code=start
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int size=nums.size();
        //find mean here is wrong
        // long long sum = 0;
        // for(int i=0;i<size;i++)
        //     sum+=nums[i];
        // sum/=size;

        //we will find median
        sort(nums.begin(),nums.end());
        int median = nums[size/2],moves=0;
        for(int i=0;i<size;i++)
            moves+=abs(median-nums[i]);
        return moves;
    }
};
// @lc code=end

