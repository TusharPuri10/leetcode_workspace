/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //  Method - 1
    //  brute force -> T(n)=O(n*n) s(n)=O(1)
    //  Method - 2
        sort(nums.begin(), nums.end());//t(n)=O(nlogn) s(n)=O(1)
        int i = 0;
        while(i+1<nums.size())// O(n)
        {
            if(nums[i] == nums[i+1])
                return true;
            ++i;
        }
        return false;
    //  Method - 3
    //  Hashing will not be beneficial here.
    // like for testcase [1000000000,1000000000,11]
    //     int M = *max_element(nums.begin(),nums.end());
    //     int m = *min_element(nums.begin(),nums.end());
    //     vector<int> hash(M-m+1,0);
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         ++hash[nums[i]-m];
    //     }
    //     for(int i: hash)
    //     {
    //         if(i>1)
    //             return true;
    //     }
    //     return false;
     }
    // Method - 4 will be by unordered set.
};
// @lc code=end

