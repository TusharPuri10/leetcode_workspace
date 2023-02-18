/*
 * @lc app=leetcode id=1005 lang=cpp
 *
 * [1005] Maximize Sum Of Array After K Negations
 */

// @lc code=start
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        //calculatin sum
        int sum=0;
        for(auto &value:nums)
            sum+=value;
        //even operation gives same number
        //case-1 nums[0]==0
        int size = nums.size();
        if(nums[0]==0)
            return sum;
        if(nums[0]>0)
        {
            if(k%2==0)
                return sum;
            else
                return sum-2*nums[0];
        }
        else
        {
            int newsum=0;
            bool zerocame = false;
            int j=0;
            for(int i=0;i<size;i++)
            {
                if(k>0 && !zerocame && nums[i]<=0)
                {
                    if(nums[i]==0)
                    {
                        zerocame=true;
                        goto end;
                    }
                    newsum+=(-1 * nums[i]);
                    j=i;
                    --k;
                }
                else
                {
                    newsum+=nums[i];
                }
                end:{}
            }
            if(zerocame || k==0)
                return newsum;
            else if(k%2==0)
                return newsum;
            else if(j+1<size && -1*nums[j]>nums[j+1])
                return newsum-2*nums[j+1];
            else
                return newsum+2*nums[j];
        }
    }
};
// @lc code=end

