/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int> > v;
        int size = score.size();
        for(int i=0;i<size;i++)
            v.push_back({score[i],i});
        
        sort(v.begin(),v.end(),greater<>());

        int k=4;
        vector<pair<int,string>> s;
        for(int i=0;i<size;i++)
        {
            if(i==0)
                s.push_back({v[i].second,"Gold Medal"});
            else if(i==1)
                s.push_back({v[i].second,"Silver Medal"});
            else if(i==2)
                s.push_back({v[i].second,"Bronze Medal"});
            else
            {
                s.push_back({v[i].second,to_string(k)});
                ++k;
            }
        }
        v.clear();
        sort(s.begin(),s.end());
        vector<string> result;
        for(int i=0;i<size;i++)
            result.push_back(s[i].second);
        return result;
    }
};
// @lc code=end

