/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution {
public:
    // void print(vector<int> v)//for debugging
    // {
    //     for(int i=0;i<v.size();i++)
    //         cout<<v[i]<<",";
    //     cout<<endl;
    // }
    vector<int> findAnagrams(string s, string p) {
        //sliding window

        if(p.size()>s.size())
            return {};

        vector<int> sMap(26,0);
        vector<int> pMap(26,0);
        vector<int> result;
        int slen = s.size();
        int plen = p.size();

        //first window
        for(int i=0;i<plen;i++)
        {
            ++pMap[p[i]-'a'];
            ++sMap[s[i]-'a'];
        }
        if(pMap==sMap)
            result.push_back(0);

        //now sliding the window
        int start=0,end=plen-1;
        ++end;
        while(end<slen)
        {
            ++sMap[s[end]-'a'];
            --sMap[s[start]-'a'];
            // cout<<start<<endl;
            // print(pMap);
            // print(sMap);
            if(pMap==sMap)
                result.push_back(start+1);
            ++start;
            ++end;
        }
        return result;
    }
};
// @lc code=end

