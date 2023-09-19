/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int min=arr[arr.size()-1]-arr[0];

        for(int i=0;i<arr.size()-1;i++)
            if(min>arr[i+1]-arr[i])
                min = arr[i+1]-arr[i];
        
        vector<vector<int>> result;
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i+1]-arr[i]==min)
                result.push_back({arr[i],arr[i+1]});
        return result;

    }
};
// @lc code=end

