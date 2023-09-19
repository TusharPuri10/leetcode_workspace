/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string word;
        string result = "";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && word.empty())
                continue;
            else if(s[i]==' ')
            {
                reverse(word.begin(),word.end());
                result +=word;
                result +=" ";
                word.clear();
            }
            else
            {
                word.push_back(s[i]);
            }
        }
        if(!word.empty())
        {
            reverse(word.begin(),word.end());
            result +=word;
        }
        if(result[result.size()-1]==' ')
            result.pop_back();
        return result;
    }
};
// @lc code=end

