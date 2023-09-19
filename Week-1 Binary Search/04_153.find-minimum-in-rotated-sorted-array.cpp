/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& a) {
        int start = 0, end = a.size()-1;
        int mid = start + (end-start)/2;
        while(start<end)
        {
            if(a[0]<=a[mid])
                start = mid+1;
            else
                end = mid;
            mid = start + (end-start)/2;
        }
        if(mid==a.size()-1 && a[0]<a[mid])
            mid=0;
        return a[mid];
    }
};
// @lc code=end

