/*
 * @lc app=leetcode id=976 lang=cpp
 *
 * [976] Largest Perimeter Triangle
 */

// @lc code=start
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int c=size-1;
        int b=size-2;
        int a=size-3;
        while(a>=0)
        {
            if((nums[a]+nums[b]>nums[c]) && (nums[b]+nums[c]>nums[a]) && (nums[a]+nums[c]>nums[b]))
                goto end;
            --a;
            --b;
            --c;
        }
        return 0;
        end:
        return nums[a]+nums[b]+nums[c];
        
    }
};
// @lc code=end

