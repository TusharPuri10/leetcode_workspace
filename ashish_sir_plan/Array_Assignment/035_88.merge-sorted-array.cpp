/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> final;
        int ind1=0,ind2=0;
        while(ind1<m && ind2<n)
        {
            if(nums1[ind1] <= nums2[ind2])
            {
                final.push_back(nums1[ind1]);
                ++ind1;
            }
            else{
                final.push_back(nums2[ind2]);
                ++ind2;
            }
        }
        while(ind1 < m)
        {
            final.push_back(nums1[ind1]);
            ++ind1;
        }
        while(ind2 < n)
        {
            final.push_back(nums2[ind2]);
            ++ind2;
        }
        nums1 = final;
    }
};
// @lc code=end

