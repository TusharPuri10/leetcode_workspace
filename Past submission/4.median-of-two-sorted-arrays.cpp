/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> result;
        // int ind1=0, ind2=0;
        // int i = 0,k;
        // if(((nums1.size()+nums2.size())%2)==0)
        //     k = (nums1.size()+nums2.size())/2;
        // else
        //     k = (nums1.size()+nums2.size())/2 -1;
        // while(i!=k && ind1<nums1.size() && ind2<nums2.size())
        // {
        //     if(nums1[ind1]<=nums2[ind2])
        //     {
        //         result.push_back(nums1[ind1]);
        //         ++ind1;
        //     }
        //     else{
        //         result.push_back(nums2[ind2]);
        //         ++ind2;
        //     }
        //     ++i;
        // }
        // if((nums1.size()+nums2.size())%2==0)
        //     return double ((result[result.size()-1] + result[result.size()-2])/2);
        // else
        //     return double (result[result.size()-1]);
        result = nums1;
        int i=0;
        while(i<nums2.size())
        {
            result.push_back(nums2[i]);
            ++i;
        }
        sort(result.begin(), result.end());
        if(result.size()%2 == 0)
            return double ((result[result.size()/2] + result[result.size()/2 -1])/2.0);
        else
            return double (result[result.size()/2]);
    }   
};
// @lc code=end

