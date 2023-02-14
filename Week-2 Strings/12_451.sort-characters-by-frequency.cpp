/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(auto &value:m)
        {
            v.push_back({value.second,value.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string result;
        for(int i=0;i<v.size();i++)
            for(int j=0;j<v[i].first;j++)
                result.push_back(v[i].second);
        return result;
    }
};
// @lc code=end

