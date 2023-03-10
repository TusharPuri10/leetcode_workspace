/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // after sorting
        // last is
        // case 1 positive
        // case 2 zero
        // case 3 negative

        int size = nums.size();
        sort(nums.begin(),nums.end());
        int a,b,c;
        c=size-1;
        b=c-1;
        a=b-1;

        //simple
        if(nums[a]>0 && nums[b]>0 && nums[c]>0)
        {
            again:
            int max1 = nums[a]*nums[b]*nums[c];
            int max2;
            if(nums[1]>=0)
                return max1;
        
            max2 = nums[0]*nums[1]*nums[c];

            if(max2>max1)
                return max2;
            else
                return max1;
        }
        //0 coming
        if(nums[c]==0)
        {
            return 0;
        }
        else if(nums[b]==0)
        {
            if(a==0)
                return 0;
            else
                return nums[0]*nums[1]*nums[c];
        }
        else if(nums[a]==0)
        {
            if(a==0)
                return 0;
            else
            {
                while(nums[a]==0 && a>0)
                    --a;
                int max1 = nums[a]*nums[b]*nums[c];
                int max2 = nums[0]*nums[1]*nums[c];
                if(max1>max2)
                    if(max1<0)
                        return 0;
                    else
                        return max1;
                else
                    if(max2<0)
                        return 0;
                    else
                        return max2;
            }
        }
        else
            goto again;

    }
};
// @lc code=end

