/*
 * @lc app=leetcode id=1037 lang=cpp
 *
 * [1037] Valid Boomerang
 */

// @lc code=start
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int x1=points[0][0],y1=points[0][1];
        int x2=points[1][0],y2=points[1][1];
        int x3=points[2][0],y3=points[2][1];

        if((x2-x1==0)||(x3-x2==0)||(x1-x3==0)){
            if((x2-x1==0)&&(x3-x2==0)&&(x1-x3==0))
                return false;
            else if((y1==y2 && x1==x2) || (y2==y3 && x2==x3) || (y3==y1 && x1==x3))
                return false;
            else
                return true;
        }
        
        float slope1 = (y2-y1)/(1.0*(x2-x1));
        float slope2 = (y3-y2)/(1.0*(x3-x2));
        float slope3 = (y3-y1)/(1.0*(x3-x1));

        cout<<slope1<<" "<<slope2<<" "<<slope3;
        if(slope1==slope2 && slope1==slope3)
            return false;
        else
            return true;

    }
};
// @lc code=end

