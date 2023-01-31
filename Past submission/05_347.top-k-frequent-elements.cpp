/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++)
        {
            ++m[nums[i]];
        }

        //array method
        // Your runtime beats 42.37 % of cpp submissions
        // Yourmemory usage beats 7.85 % of cpp submissions 
        // vector<vector<int>> arr(nums.size()+1);
        // for(auto &value: m)
        // {
        //     arr[value.second].push_back(value.first);
        // }
        // vector<int> result;
        // for(int i=nums.size();i>=0;i--)
        // {
        //     for(int j=0;j<arr[i].size();j++)
        //     {
        //         if(k==0)
        //             goto end;
        //         result.push_back(arr[i][j]);
        //         --k;
        //     }
        // }
        // end:
        // return result;
        
        // another map method
        // Your runtime beats 57.53 % of cpp submissions
        // Your memory usage beats 47.43 % of cpp submissions
        map<int, vector<int>, greater<int> > p;
        for(auto &value : m)
        {
            p[value.second].push_back(value.first);
        }
        vector<int> result;
        for(auto &value : p)
        {
            for(int i=0;i<value.second.size();i++)
            {
                if(k==0)
                    goto end;
                result.push_back(value.second[i]);
                --k;
            }
        }
        end:
            return result;
    }
        
};
// @lc code=end

