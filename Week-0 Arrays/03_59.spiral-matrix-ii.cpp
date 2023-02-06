/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int> (n));
        int rs=0,re=n-1;
        int cs=0,ce=n-1;
        int total = n*n;
        int count=1;
        while(count<=total)
        {
            for(int j=cs;j<=ce && count<=total;j++)
                result[rs][j]=(count++);
            ++rs;
            for(int i=rs;i<=re && count<=total;i++)
                result[i][ce]=(count++);
            --ce;
            for(int j=ce;j>=cs && count<=total;j--)
                result[re][j]=(count++);
            --re;
            for(int i=re;i>=rs && count<=total;i--)
                result[i][cs]=(count++);
            ++cs;
        }
        return result;
    }
};
// @lc code=end

