/*
 * @lc app=leetcode id=1961 lang=cpp
 *
 * [1961] Check If String Is a Prefix of Array
 */

// @lc code=start
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int stringsize = s.size();
        int arrsize = 0;
        for(auto &value: words)
            arrsize+=value.size();
        
        if(stringsize>arrsize)
            return false;
        
        int currentword = 0;
        int currentletter = 0;
        for(int i=0;i<stringsize;i++)
        {
            if(s[i]!=words[currentword][currentletter])
                return false;
            
            ++currentletter;
            if(currentletter>=words[currentword].size())
            {
                ++currentword;
                currentletter=0;
            }
        }
        if(currentletter==0)
            return true;
        else
            return false;
    }
};
// @lc code=end

