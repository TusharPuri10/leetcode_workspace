/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size() != t.size())
        //     return false;
        // vector<int> hash1(26,0);
        // vector<int> hash2(26,0);
        // for(int i=0;i<s.size();i++)
        // {
        //     ++hash1[s[i] - 'a'];
        //     ++hash2[t[i] - 'a'];
        // }
        // if(hash1==hash2)
        // return true;
        // else
        // return false;
        if(s.size() != t.size())
            return false;
        vector<int> hash(26);
        for(int i=0;i<s.size();i++)
        {
            ++hash[s[i] - 'a'];
            --hash[t[i] - 'a'];
        }
        for(int i=0;i<26;i++)
            if(hash[i]!=0)
                return false;
        return true;
    }
};
// @lc code=end

