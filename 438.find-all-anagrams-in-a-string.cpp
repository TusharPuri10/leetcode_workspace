/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        sort(p.begin(),p.end());
        vector<int> result;
        if(p.size()>s.size())
            return result;
        int Pscore=0,Sscore=0;
        for(int i=0;i<p.size();i++)
            Pscore += p[i];
        deque<char> q;
        for(int i=0;i<s.size();i++)
        {
            q.push_back(s[i]);
            Sscore+=s[i];
            if(q.size()>p.size())
            {
                char c = q.front();
                Sscore-=c;
                q.pop_front();
            }
            if(Sscore==Pscore)
            {
                string subs;
                for(int i=0;i<q.size();i++)
                    subs.push_back(q[i]);
                sort(subs.begin(),subs.end());
                if(subs==p)
                    result.push_back(i-p.size()+1);
                subs.clear();
            }
        }
        return result;
    }
};
// @lc code=end

