/*
 * @lc app=leetcode id=1030 lang=cpp
 *
 * [1030] Matrix Cells in Distance Order
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int> > result;
        vector< pair< int, pair <int,int>> > v;

        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                v.push_back({(abs(rCenter-i)+abs(cCenter-j)),{i,j}});
        sort(v.begin(),v.end());

        vector<int> temp;
        for(int i=0;i<v.size();i++)
        {
            temp.push_back(v[i].second.first);
            temp.push_back(v[i].second.second);
            result.push_back(temp);
            temp.clear();
        }
        return result;
    }
};
// @lc code=end

