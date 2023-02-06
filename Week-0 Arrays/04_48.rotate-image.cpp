/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void swap(int& x,int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        int count = n-1;
        int i=0,j=0;
        while(count>j)
        {
            int tempj = j;
            while(tempj<count)
            {
                int x = tempj;
                int y = n-1-i;
                int c = 0;
                while(c<3)
                {
                    swap(a[i][tempj],a[x][y]);
                    int temp = y;
                    y = n-1-x;
                    x = temp;
                    ++c;
                }
                ++tempj;
            }
            ++i;
            ++j;
            --count;
        }
    }
};
// @lc code=end

