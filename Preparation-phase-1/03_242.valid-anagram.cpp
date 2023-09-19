/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        //not doing brute force

        //sorting O(nlogn) //best as sorting cane some time takes O(1)

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s!=t)
            return false;
        else
            return true;

        //unordered_multiset -> close to O(n^2)
        // unordered_multiset<char> m;
        // for(int i = 0; i < s.size(); i++)
        // {
        //     m.insert(s[i]);
        // }
        // for(int i = 0; i<t.size(); i++)//O(n)
        // {
        //     auto it = m.find(t[i]);//O(n)->O(n^2)
        //     if(it!=m.end())
        //         m.erase(it);
        // }
        // if(m.empty())
        //     return true;
        // else
        //     return false;

        //single hashmap
        // unordered_map<char, int> m;
        // for(int i = 0; i < s.size(); i++)
        //     ++m[s[i]];
        // for(int i = 0; i < t.size(); i++)
        //     --m[t[i]];
        // for(auto &value: m)
        //     if(value.second!=0)
        //         return false;
        // return true;
    }
};
// @lc code=end

