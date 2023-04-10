/*
 * @lc app=leetcode id=1922 lang=cpp
 *
 * [1922] Count Good Numbers
 */

// @lc code=start
class Solution {
public:
        //position false -> even -> even -> 0 2 4 6 8
    //position true -> odd -> prime -> 2 3 5 7
    const unsigned int M = 1000000007;
    int fun(long long n, bool position)
    {
        if(n==0)
            return 5;
        if(position==false)
        {
            return (5*(fun(n-1,true)%M))%M;
        }
        else
        {
            return (4*(fun(n-1,false)%M))%M;
        }
    }
    int countGoodNumbers(long long n)
    {
        if(n%2==0)
            return fun(n-1,true);
        else
            return fun(n-1,false);

        // odd number of digits 0 1 2 (even at lsd)
        // even number of digits 0 1 2 3 (odd at lsd)
    }
};
// @lc code=end

