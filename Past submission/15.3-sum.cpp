/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> a;
        if(nums[0]>0) return result;
        if(nums[0]==0 && nums[nums.size()-1]==0)
        {
            a.push_back(0);
            a.push_back(0);
            a.push_back(0);
            result.push_back(a);
            return result;
        }
        int left, right, mid, zero=nums.size()-2, flag = 0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] >= 0)
            {
                zero = i+1;
                break;
            }
        }
        for(int i = 0; i <= zero && i<nums.size()-2; i++)
        {
            int j=i+1;
            while(j < nums.size()-1)
            {
                if(nums[i] + nums[j] <= 0)
                {
                    if(j< zero)
                        left = zero;
                    else
                        left = j+1;
                }
                else
                    return result;
                right = nums.size()-1;
                while(left<=right)
                {
                    mid = (right-left)/2 + left;
                    if(nums[i] + nums[j] + nums[mid] == 0)
                    {
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(nums[mid]);
                        result.push_back(a);
                        if(result.size() > 1)
                        {
                            int k = result.size()-2;
                            while(k>=0)
                            {
                                if(result[result.size() - 1] == result[k])
                                {
                                    result.pop_back();
                                    break;
                                }
                                --k;
                            }
                        }
                        a.clear();
                        break;
                    }
                    else if(nums[i] + nums[j] + nums[mid] < 0)
                        left = mid+1;
                    else
                        right = mid-1;
                }
                ++j;
            }
        }
        return result;
    }
};
// @lc code=end

