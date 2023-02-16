/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        
        vector<int> freqs1(26,0);
        vector<int> freqs2(26,0);
        //first window
        for(int i=0;i<s1.size();i++)
        {
            ++freqs1[s1[i]-'a'];
            ++freqs2[s2[i]-'a'];
        }
        if(freqs1==freqs2)
            return true;
        
        //rest window
        int j=0;
        for(int i=s1.size();i<s2.size();i++)
        {
            --freqs2[s2[j]-'a'];
            ++freqs2[s2[i]-'a'];
            if(freqs1==freqs2)
                return true;
            ++j;
        }
        return false;
    }
};
// @lc code=end

