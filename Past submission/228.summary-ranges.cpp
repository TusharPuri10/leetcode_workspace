/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int start,left,right,count=0;
        vector<string> ranges;
        if(nums.size()==0) return ranges;
        start = nums[0];
        left = nums[0];
        right = nums[0];
        for(int i = 0; i < nums.size()-1; i++)
        {
            left = nums[i];
            right = nums[i+1];
            if(left+1 != right)
            {
                if(count == 0)
                    ranges.push_back(to_string(left));
                else
                {
                   ranges.push_back(to_string(start)+"->"+to_string(left));
                }
                count=0;
            }
            else{
                if(count == 0){
                    start = left;
                ++count;
            }
            }
        }
    if(count == 0)
            ranges.push_back(to_string(right));
        else
        {
            ranges.push_back(to_string(start)+"->"+to_string(right));
        }
        return ranges;
    }
};
// @lc code=end

