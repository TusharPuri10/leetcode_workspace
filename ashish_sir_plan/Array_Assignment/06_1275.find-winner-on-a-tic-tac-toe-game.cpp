/*
 * @lc app=leetcode id=1275 lang=cpp
 *
 * [1275] Find Winner on a Tic Tac Toe Game
 */

// @lc code=start
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        //A plays first, Let A fills 1 in grid
        // let B fills 0 in grid

        //3 cases
        // case-1 -> corner
        // case-2 -> middle of a side
        // case-3 -> middle of grid

        int grid[3][3] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};

        int size = moves.size();
        for(int i=0;i<size;i++)
            if(i%2 == 0)//A -> 1
                grid[moves[i][0]][moves[i][1]]=1;
            else//B -> 0
                grid[moves[i][0]][moves[i][1]]=0;
        
        int check;
        if(size%2==0)//last move B, check if B win or not
            check = 0;
        else//last move A, check if A win or not
            check = 1;
        
        int row_flag,col_flag,pending_flag=0;//to check diagonals

        //checking for rows and columns
        for(int i=0;i<3;i++)
        {
            row_flag=1;
            col_flag=1;
            for(int j=0;j<3;j++)
            {
                if(grid[i][j]==-1)
                    pending_flag=1;
                if(grid[i][j]!=check)
                    row_flag=0;
                if(grid[j][i]!=check)
                    col_flag=0;
            }
            if(row_flag==1)
                return (check==0)?("B"):("A");
            if(col_flag==1)
                return (check==0)?("B"):("A");
        }

        //checking for left diagonal
        if(grid[0][0]==check && grid[1][1]==check && grid[2][2]==check)
            return (check==0)?("B"):("A");
        //checking for right diagonal
        if(grid[2][0]==check && grid[1][1]==check && grid[0][2]==check)
            return (check==0)?("B"):("A");

        return (pending_flag==1)?("Pending"):("Draw");

    }
};
// @lc code=end

