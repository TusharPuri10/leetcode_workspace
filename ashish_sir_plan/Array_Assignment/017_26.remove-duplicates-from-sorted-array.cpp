/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    void swap(int &x, int &y)
    {
        int temp = x;
        x=y;
        y=temp;
    }
    int removeDuplicates(vector<int>& nums) {
        
        // int size = nums.size();
        // int key = nums[0];
        // for(int i=1;i<size;i++)
        // {
        //     if(nums[i]==key)
        //     {
        //         for(int j=i;j<size-1;j++)
        //             nums[j]=nums[j+1];
        //         --size;
        //         --i;
        //     }
        //     else
        //         key=nums[i];
        // }
        // return size;
        // O(n^2)

        //Observe the question -100 <= nums[i] <= 100
        //sorted....return must be sorted as well

        //O(log n) would be more naive approach

        //lets try O(n)
        int size = nums.size();
        int last=0;
        for(int i=1;i<size;i++)
        {
            if(nums[i]>nums[last]){
                ++last;
                swap(nums[i],nums[last]);
            }
        }
        int k=0;
        while(k<size-1 && nums[k]<nums[k+1])
        {
            ++k;
        }
        return k+1;
    }
};
// @lc code=end

