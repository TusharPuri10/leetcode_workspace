/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int>& nums) {
        //Dutch National Flag Algorithm
        //low mid high

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[high], nums[mid]);
                    high--;
                    break;
            }
        }
    }
};
// @lc code=end

