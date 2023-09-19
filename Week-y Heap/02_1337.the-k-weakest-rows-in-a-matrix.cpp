/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<
                pair<int,int>
                ,vector<pair<int,int>>
                ,greater<pair<int,int>>
                > pq;
        int rows = mat.size();
        int cols = mat[0].size();

        pair<int,int> p;
        for(int i=0;i<rows;i++)
        {
            p = {0,i};
            for(int j=0;j<cols;j++)
            {
                if(mat[i][j]==0)
                    break;
                p.first++;
            }
            pq.push(p);
        } 

        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
// @lc code=end

