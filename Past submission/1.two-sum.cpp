/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    int max = *max_element(nums.begin(),nums.end());
    int min = *min_element(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++) //a[i]+min
    {
        nums[i]-=min;
    }
    target-=(2*min);
    //int* has=new int[max-min] {};
    vector<int> has(max-min,0);
    for(int i=0;i<nums.size();i++)
    {
        ++has[nums[i]];
    }
    vector<int> sol;
    for(int i=0;i<nums.size();i++)
    {
        if(has[target-nums[i]]>0 && target>nums[i])
        {
            sol.push_back(i);
        }
    }
    //delete[] has;
    return sol;
    }
};
// @lc code=end

