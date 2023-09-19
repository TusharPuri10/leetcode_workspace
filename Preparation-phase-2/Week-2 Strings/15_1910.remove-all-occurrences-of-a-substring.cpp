/*
 * @lc app=leetcode id=1910 lang=cpp
 *
 * [1910] Remove All Occurrences of a Substring
 */

// @lc code=start
class Solution {
public:
    string removeOccurrences(string s, string part) {

        // if(part.size()>s.size())
        //     return s;
        // string result;
        // string substring;
        // //first window
        // for(int i=0;i<part.size();i++)
        // {
        //     substring.push_back(s[i]);
        // }
        // if(substring!=part)
        //     result.push_back(s[0]);
        
        // //rest windows
        // for(int i=part.size();i<s.size();i++)
        // {
        //     substring.erase(0,1);
        //     substring.push_back(s[i]);
        //     if(substring!=part)
        //         result.push_back(s[i-part.size()+1]);
        //     else
        //     {

        //     }
        // }
        //sliding window is hard approach
        while(s.size()>0 && s.find(part)<s.size())
            s.erase(s.find(part),part.size());
        return s;
    }
};
// @lc code=end

