/*
 * @lc app=leetcode id=1232 lang=cpp
 *
 * [1232] Check If It Is a Straight Line
 */

// @lc code=start
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        
        //simple maths slope should be equal
        // slope = (y2-y1)/(x2-x1)
        float slope;
        int infinity_flag;
        if((c[1][0]-c[0][0])==0)
            infinity_flag=1;
        else{
            slope = ((c[1][1]-c[0][1])/(1.0 * (c[1][0]-c[0][0])));
            infinity_flag=0;
        }
        int size = c.size();
        float current_slope;
        int current_infinity_flag=0;
        for(int i=2;i<size;i++)
        {
            if((c[i][0]-c[i-1][0])==0)
                current_infinity_flag=1;
            else{
                current_slope = ((c[i][1]-c[i-1][1])/(1.0 *(c[i][0]-c[i-1][0])));
                current_infinity_flag=0;
            }
            if(infinity_flag!=current_infinity_flag)
                return false;
            if(infinity_flag==0 && slope!=current_slope)
                return false;
        }
        return true;
    }
};
// @lc code=end

