/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        string sub,tmp;
        if(s.size() == 0 || s.size() == 1)
            return s.size();
        sub.push_back(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(sub.size() > max)
                max = sub.size();
            for(int j=0; j<sub.size(); j++)
            {
                if(sub[j]==s[i])
                {
                    tmp = sub;
                    int t = j+1;
                    sub.clear();
                    while(t<tmp.size())
                        {
                            sub.push_back(tmp[t]);
                            ++t;
                        }
                }
            }
            sub.push_back(s[i]);
        }
        if(sub.size() > max)
             max = sub.size();
        return max;
    }
};
// @lc code=end

