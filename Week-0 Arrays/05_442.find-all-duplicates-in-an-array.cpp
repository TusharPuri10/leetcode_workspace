/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    void swap(int& x, int& y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==-1)
                continue;
            while(i+1!=nums[i])
            {
                if(nums[i]==-1)
                    break;
                if(nums[i]==nums[nums[i]-1])
                {
                    result.push_back(nums[i]);
                    int temp=nums[i];
                    nums[i]=-1;
                    nums[temp-1]=-1;
                    break;
                }
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        return result;
    }
};
// @lc code=end

