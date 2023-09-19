/*
 * @lc app=leetcode id=2540 lang=cpp
 *
 * [2540] Minimum Common Value
 */

// @lc code=start
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //two pointer
        int i1 = 0;
        int i2 = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();

        while(i1<size1 && i2<size2)
        {
            if(nums1[i1]==nums2[i2])
                return nums1[i1];
            else if(nums1[i1]>nums2[i2])
                ++i2;
            else
                ++i1;
        }
        return -1;
    }
};
// @lc code=end

