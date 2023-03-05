/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //unsorted
        //approach-1 -> O(n^2) 10^4^2 -> 10^8 instruction -> chal jaega under 1 second
        //1GHz -> 10^9 instruction per second 10Mb
        // That's why first see constraint then decide approach/algorithm


        //approach-2 -> sorting O(n.logn) then two pointer approach
        //10^4 * log(10^4)
        //4 * 10^4 instruction approax

        // int size = nums.size();
        // vector<pair<int,int>> v;
        // for(int i=0;i<size;i++)
        //     v.push_back({nums[i],i});
        // sort(v.begin(),v.end());

        // int start = 0,end = size-1;
        // while(start<end)
        // {
        //     if(v[start].first + v[end].first==target)
        //         return {v[start].second ,v[end].second};
        //     else if(v[start].first + v[end].first >target)
        //         --end;
        //     else
        //         ++start;
        // }
        // return {-1,-1};
        
        //approach-3 -> hashmap ( not working)
        unordered_map<int,int> m;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<size;i++)
        {
            if(m.find(target-nums[i]) != m.end() && m[target-nums[i]]!=m[nums[i]])
                return {m[nums[i]],m[target-nums[i]]};
        }
        return {-1,-1};

        
    }
};
// @lc code=end

