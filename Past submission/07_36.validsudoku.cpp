/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> subgroup[3][3],row[9],column[9];
        int update = 2;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char ch = board[i][j];
                if(ch==46)
                    continue;
                if(++row[i][ch]== 2)
                    return false;
                if(++column[j][ch]== 2)
                    return false;
                if(++subgroup[i/3][j/3][ch]==2)
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

