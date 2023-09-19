/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rs=0,re=matrix.size()-1;
        int cs=0,ce=matrix[0].size()-1;
        int total = (re+1)*(ce+1);
        vector<int> result(total);
        int count=0;
        while(rs<=re && cs<=ce)
        {
            for(int j=cs;j<=ce;j++)
                result[count++]=matrix[rs][j];
            if(count>=total)
                break;
            ++rs;
            for(int i=rs;i<=re;i++)
                result[count++]=matrix[i][ce];
            if(count>=total)
                break;
            --ce;
            for(int j=ce;j>=cs;j--)
                result[count++]=matrix[re][j];
            if(count>=total)
                break;
            --re;
            for(int i=re;i>=rs;i--)
                result[count++]=matrix[i][cs];
            if(count>=total)
                break;
            ++cs;
        }
        return result;
    }
};
// @lc code=end

