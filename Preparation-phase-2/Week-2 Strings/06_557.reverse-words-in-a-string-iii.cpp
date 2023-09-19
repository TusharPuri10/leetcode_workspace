/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string word;
        string result;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(word.begin(),word.end());
                result+=word;
                result+=' ';
                word.clear();
            }
            else
            {
                word.push_back(s[i]);
            }
        }
        reverse(word.begin(),word.end());
        result+=word;
        return result;
    }
};
// @lc code=end

