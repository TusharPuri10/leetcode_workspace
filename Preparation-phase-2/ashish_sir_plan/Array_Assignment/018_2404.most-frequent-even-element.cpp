/*
 * @lc app=leetcode id=2404 lang=cpp
 *
 * [2404] Most Frequent Even Element
 */

// @lc code=start
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        //agniya
        //approach 1 hashtable
        // unordered_map<int,int> m;
        // int size = nums.size();
        // for(int i=0;i<size;i++)
        // {
        //     if(nums[i]%2==0)
        //         m[nums[i]]++;
        // }
        // int max_times = -1, max_element=-1;
        // for(auto &value: m)
        // {
        //     if(value.second>max_times)
        //     {
        //         max_times = value.second;
        //         max_element = value.first;
        //     }
        //     if(value.second == max_times)
        //     {
        //         if(value.first<max_element)
        //             max_element = value.first;
        //     }
        // }
        // return max_element;
        //most fequent
        int most_freq_elmnt = -1;
        int max_freq = 0;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++)
        {
            if(nums[i]%2==0)
            {
                int k = i+1;
                while(k<size && nums[k]==nums[i])
                    ++k;
                if(k-i > max_freq)
                {
                    max_freq=k-i;
                    most_freq_elmnt=nums[i];
                }
                i=k-1;
            }
        }
        return most_freq_elmnt;
    }
};
// @lc code=end

