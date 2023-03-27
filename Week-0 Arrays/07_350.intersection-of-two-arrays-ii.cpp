/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> m;

        int size1 = nums1.size();
        int size2 = nums2.size();

        for(int i=0;i<size1;i++)
            m[nums1[i]]++;
        
        vector<int> result;
        for(int i=0;i<size2;i++)
        {
            if(m[nums2[i]]>0)
            {
                result.push_back(nums2[i]);
                --m[nums2[i]];
            }
        }

        return result;

    }

};
// @lc code=end

