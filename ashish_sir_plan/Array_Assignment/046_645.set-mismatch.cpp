/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size,0);
        for(auto &x:nums)
            v[x-1]++;
        
        vector<int> result;
        for(int i=0;i<size;i++)
        {
            if(v[i]==2)
            {
                if(result.empty())
                    result.push_back(i+1);
                else
                {
                    result.push_back(i+1);
                    swap(result[0],result[1]);
                }
            }
            if(v[i]==0)
            {
                result.push_back(i+1);
            }
        }
        return result;
    }
};
// @lc code=end

