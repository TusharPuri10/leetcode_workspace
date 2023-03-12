/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        //hashtable method
        unordered_map<int,int> m;

        int size = nums.size();
        if(size==1)
            return false;
        
        //first window
        for(int i=0;i<size && i<=k;i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>1)
                return true;
        }

        //rest window
        int start=0;
        int end=k+1;
        while(end<size)
        {
            --m[nums[start++]];
            if(++m[nums[end++]]>1)
                return true;
        }
        return false;
    }
};
// @lc code=end

