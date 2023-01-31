/*
 * @lc app=leetcode id=2149 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution {
public:
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    vector<int> rearrangeArray(vector<int>& nums)
    {
        int size = nums.size();
        int p = 0, n = 1;
        vector<int> nums2 (size);
        for(int j=0;j<size;j++)
        {
            if(nums[j]>=0)
            {
                nums2[p]=nums[j];
                p+=2;
            }
            else
            {
                nums2[n]=nums[j];
                n+=2;
            }
        }
        return nums2;
    }
};
// @lc code=end

