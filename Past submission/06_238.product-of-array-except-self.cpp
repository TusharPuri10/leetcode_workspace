/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //method 1
        // Your runtime beats 52.15 % of cpp submissions
        // Your memory usage beats 8 % of cpp submissions (26 MB)

        // vector<int> prefix(nums.size()+1);
        // prefix[0]=1;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     prefix[i+1] = prefix[i] * nums[i];
        // }

        // vector<int> postfix (nums.size()+1);
        // postfix[nums.size()] = 1;
        // for(int i=nums.size()-1;i>=0;i--)
        // {
        //     postfix[i] = postfix[i+1] * nums[i];
        // }
        // vector<int> result;
        // for(int i=0;i<nums.size();i++)
        // {
        //     result.push_back(prefix[i]*postfix[i+1]);
        // }
        // return result;

        // same approach as above but more efficient

        vector<int> result(nums.size());
        result[0]=1;
        for(int i=0;i<nums.size()-1;i++)//stored prefix in result
            result[i+1] = result[i]* nums[i];
        // now multiplying postfix into prefix;
        int postfix=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            result[i]*=postfix;
            postfix*=nums[i];
        }
        return result;
        // Your runtime beats 35.57 % of cpp submissions
        // Your memory usage beats 96.73 % of cpp submissions 
    }
};
// @lc code=end

