/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double pow(double x,int n)
    {
        // base condition
        if(n==0)
            return 1;
        if(n==1 || n==-1)
            return x;
        
        if(n>1)
        {
            double tmp;
            if(n%2==0)
            {
                tmp = myPow(x,n/2);
                return tmp*tmp;
            }
            else
            {
                tmp = myPow(x,n/2);
                return x*tmp*tmp;
            }
        }
        else
        {   
            double tmp;
            if(n%2==0)
            {
                tmp = myPow(x,n/2);
                return 1/(tmp*tmp);
            }
            else
            {
                tmp = myPow(x,n/2);
                return 1/(x*tmp*tmp);
            }

        }
    }
    double myPow(double x, int n) {
        // x^n =x^(n-1) * x (this is making stack overflow)
        // x^n = (x*x) * x^(n/2)
        // 2^4 = (2*2) * 2^2 = 4 * (2*2) 

        // 2^10 = (2*2)

        
        // return (1/(x*x)) * myPow(x,n/2);
    }
};
// @lc code=end

