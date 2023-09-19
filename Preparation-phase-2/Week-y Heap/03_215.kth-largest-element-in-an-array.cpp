/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(auto value: nums)
            q.push(value);
        
        int i=0;
        int kth_largest=nums[0];
        while(i!=k)
        {
            kth_largest = q.top();
            q.pop();
            ++i;
        }
        return kth_largest;
    }
};
// @lc code=end

