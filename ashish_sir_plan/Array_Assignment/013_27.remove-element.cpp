/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    void swap(int &x,int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int removeElement(vector<int>& nums, int val) {
        // kind of approach similar to selection sort
        // end variable which point last element of array which is not equal to val
        // start variable which point to first element
        // iterate start varaible from beginning of array till start is less than end

        int start = 0;
        int size = nums.size();
        if(size==0)
            return 0;
        int end = size-1;
        while(nums[end]==val)
        {
            if(end==0)
                return 0;
            --end;
        }
        while(start<end)
        {
            if(nums[start]==val)
            {
                swap(nums[start],nums[end]);
                --end;
                while(nums[end]==val)
                    --end;
            }
            ++start;
        }
        return end+1;

    }
};
// @lc code=end

