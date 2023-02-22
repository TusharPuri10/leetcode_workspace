/*
 * @lc app=leetcode id=1090 lang=cpp
 *
 * [1090] Largest Values From Labels
 */

// @lc code=start
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector<pair<int,int> > v;
        int size = values.size();
        for(int i=0;i<size;i++)
            v.push_back({values[i],labels[i]});
        
        unordered_map<int,int > m;
        for(int i=0;i<size;i++)
                m[v[i].second]=0;
        sort(v.begin(),v.end(),greater<>());
        int sum = 0, i=0,j=0;
        while(j<numWanted)
        {
            if(i>=size)
                break;
            if(m[v[i].second]<useLimit)
            {
                ++j;
                sum+=v[i].first;
                ++m[v[i].second];
            }
            ++i;
        }
        return sum;
    }
};
// @lc code=end

