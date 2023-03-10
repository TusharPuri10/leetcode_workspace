/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int size = nums.size();
        //first window
        double avg=0;
        for(int i=0;i<k;i++)
            avg+=nums[i];
        
        //rest window
        int max_avg=avg;
        int start=0,end=k;
        while(end<size)
        {
            avg-=nums[start];
            avg+=nums[end];
            if(avg>max_avg)
                max_avg = avg;
            ++end;
            ++start;
        }
        return max_avg/(k*1.0);
    }
};
// @lc code=end

