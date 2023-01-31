/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<int> d;
        if(nums[0] !=1)
            d.push_back(1);
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]+1 != nums[i+1] && nums[i+1] != nums[i])
            {
                int k = nums[i]+1;
                while( k != nums[i+1])
                {
                    d.push_back(k);
                    ++k;
                }
            }
        }
        if(nums[nums.size()-1] != size)
        {
            int k = nums[nums.size()-1] + 1;
            while(k != size+1)
            {
                d.push_back(k);
                ++k;
            }
        }
        return d;
    }
};
// @lc code=end

