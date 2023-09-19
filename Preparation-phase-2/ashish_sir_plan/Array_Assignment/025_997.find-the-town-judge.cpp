/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
 */

// @lc code=start
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        // map<int,unordered_set<int>> m;
        // for(auto &value:trust)
        //     m[value[0]].insert(value[1]);

        // set<int> m;
        // for(auto &value:trust)
        //     m.insert(value[0]);

        vector<int> m(n,0);
        for(auto &value:trust)
            m[value[0]-1]=-1;
        
        int flag=0;
        int judge;
        // for(int i=1;i<=n;i++)
        // {
        //     if(m.find(i)==m.end())
        //     {
        //         ++flag;
        //         judge=i;
        //     }
        // }
        // auto it = m.begin();
        // for(int j=1;j<=n;j++)
        // {
        //     if(j!=(*it))
        //     {
        //         ++flag;
        //         judge=j;
        //     }
        //     else
        //         it++;
        // }
        for(int i=0;i<n;i++)
        {
            if(m[i]==0)
            {
                ++flag;
                judge=i+1;
            }
        }
        if(flag!=1)
            return -1;

        // map<int,bool> k;
        for(auto &value:trust)
            if(value[1]==judge)
                m[value[0]-1]=judge;
            
        for(int i=0;i<n;i++)
        {
            if(i+1==judge)
                continue;
            if(m[i]!=judge)
                return -1;
        }
        return judge;
    }
};
// @lc code=end

