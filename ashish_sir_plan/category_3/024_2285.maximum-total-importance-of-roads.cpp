/*
 * @lc app=leetcode id=2285 lang=cpp
 *
 * [2285] Maximum Total Importance of Roads
 */

// @lc code=start
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int,int> m;
        int size = roads.size();
        for(int i=0;i<n;i++)
            m[i]=0;
        for(int i=0;i<size;i++)
        {
            ++m[roads[i][0]];
            ++m[roads[i][1]];
        }
        vector<vector<int> > v;
        int mapsize = m.size();
        for(int i=0;i<n;i++)
            v.push_back({m[i],i});
        sort(v.begin(),v.end());
        int vsize = v.size();
        for(int i=vsize-1;i>=0;i--)
            v[i].push_back(n--);
        for(int i=0;i<vsize;i++)
        {
            int temp = v[i][1];
            v[i][1] = v[i][0];
            v[i][0] = temp;
        }
        sort(v.begin(),v.end());
        long long sum=0;
        for(int i=0;i<size;i++)
            sum += (v[roads[i][0]][2] + v[roads[i][1]][2]);
        return sum;
    }
};
// @lc code=end

