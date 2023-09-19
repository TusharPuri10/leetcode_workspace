/*
 * @lc app=leetcode id=1859 lang=cpp
 *
 * [1859] Sorting the Sentence
 */

// @lc code=start
class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> v;
        int i;
        string word;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                word.pop_back();
                v.push_back({s[i-1],word});
                word.clear();
            }
            else
                word.push_back(s[i]);
        }
        word.pop_back();
        v.push_back({s[i-1],word});
        word.clear();
        sort(v.begin(),v.end());
        string result;
        for(int i=0;i<v.size();i++)
        {
            result+=v[i].second;
            result.push_back(' ');
        }
        result.pop_back();
        return result;
    }
};
// @lc code=end

