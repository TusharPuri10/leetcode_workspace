/*
 * @lc app=leetcode id=2248 lang=cpp
 *
 * [2248] Intersection of Multiple Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        set<int> m;

        //first array
        int size = nums.size();
        int size1 = nums[0].size();

        for(int i=0;i<size1;i++)
            m.insert(nums[0][i]);

        set<int> m1;
        for(int i=1;i<size;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(m.find(nums[i][j])!=m.end())
                {
                    m1.insert(nums[i][j]);
                }
            }

            m.clear();
            m=m1;
            m1.clear();
        }

        vector<int> result;
        for(auto &value:m)
            result.push_back(value);

        return result;


    }
};
// @lc code=end

