/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x,int n)
    {
        // base condition
        if(n==0)
            return 1;
        
        if(n<0)
        {
            double temp = myPow(1/x,(-1)*(n/2));
            if(n%2==0)
                return temp*temp;
            else
                return (1/x)*temp*temp;
        }
        else
        {
            double temp = myPow(x,n/2);
            if(n%2==0)
                return temp*temp;
            else
                return x*temp*temp;
        }
    }
};
// @lc code=end

