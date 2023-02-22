/*
 * @lc app=leetcode id=1608 lang=cpp
 *
 * [1608] Special Array With X Elements Greater Than or Equal X
 */

// @lc code=start
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        while(nums[0]==0){
            nums.erase(nums.begin());
            if(nums.size()==0)
                return -1;
        }
        int count=1;
        int size = nums.size();

        for(int i=size-1;i>=0;i--)
        {
            if(nums[i]>=count)
            {
                ++count;
            }
            else
            {
                if(count-1==nums[i+1])
                    return count-1;
                else
                    return -1;
            }
        }
        return count-1;
    }
};
// @lc code=end

