/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        unordered_map<char, string> m;
        unordered_set<string> sett;
        int j=0;
        for(int i=0;i<=s.size();i++)
        {   
            if(s[i]==' ' || i==s.size())
            {
                if(m.find(pattern[j])==m.end())
                {
                    if(sett.find(word)!=sett.end())
                        return false;
                    m[pattern[j]] = word;
                    sett.insert(word);
                }
                else if(m[pattern[j]]!=word)
                {
                    return false;
                }
                word.clear();
                ++j;
                continue;
            }
            word.push_back(s[i]);
        }
        if(j!=pattern.size())
            return false;
        else
            return true;
    }
};
// @lc code=end

