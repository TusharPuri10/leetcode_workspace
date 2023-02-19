/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i1=0,i2=0;
        vector<int> result;
        while(i1<size1 && i2<size2)
        {
            if(nums1[i1]==nums2[i2]){
                result.push_back(nums1[i1]);
                ++i1;
                ++i2;
            }
            else if(nums1[i1]>nums2[i2])
                ++i2;
            else
                ++i1;
        }
        return result;
    }
};
// @lc code=end

