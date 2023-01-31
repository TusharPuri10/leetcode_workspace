/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    vector<int> r1,r2;
    int i = 0, j;
    r2.push_back(triangle[0][0]);
    if(triangle.size()==1)
    {
        return r2[0];
    }
    r1=r2;
    r2.clear();
    ++i;
    while(i < triangle.size())
    {
        j=0;
        while(j<i+1)
        {
            if(j==0)
            {
                r2.push_back(r1[j]+triangle[i][j]);
            }
            else if(j==i)
            {
                r2.push_back(r1[j-1]+triangle[i][j]);
            }
            else
            {
                if(r1[j]+triangle[i][j] >= r1[j-1]+triangle[i][j])
                    r2.push_back(r1[j-1]+triangle[i][j]);
                else
                    r2.push_back(r1[j]+triangle[i][j]);
            }
            ++j;
        }
        r1.clear();
        r1=r2;
        r2.clear();
        ++i;
    }
    return *min_element(r1.begin(), r1.end());
    }
    /* bottom up approach is much faster
    class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n= triangle.size();
        for(int i= n-2 ;i>=0;i--){
          for(int j=0; j< triangle[i].size(); j++){
              triangle[i][j]= triangle[i][j] + min(triangle[i+1][j],triangle[i+1][j+1]);
          }
        }
        return triangle[0][0];
    }
};
    */
};
// @lc code=end

