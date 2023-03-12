/*
 * @lc app=leetcode id=2099 lang=cpp
 *
 * [2099] Find Subsequence of Length K With the Largest Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        //basic solution

        vector<pair<int,int>> v;
        int size = nums.size();
        for(int i=0;i<size;i++)
            v.push_back({nums[i],i});// O(n)

        sort(v.begin(),v.end(),greater<>());// O(n logn)
        
        
        for(int i=0;i<k;i++)
            swap(v[i].first,v[i].second);
        
        sort(v.begin(),v.begin()+k);
        vector<int> result;
        for(int i=0;i<k;i++)
            result.push_back(v[i].second);
        return result;

        //priority queue

    }
};
// @lc code=end

