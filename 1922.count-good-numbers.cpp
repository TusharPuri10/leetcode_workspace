/*
 * @lc app=leetcode id=1922 lang=cpp
 *
 * [1922] Count Good Numbers
 */

// @lc code=start
#define mod 1000000007
class Solution {
public:

    int countGoodNumbers(long long n)
    {
        if(n%2==1)
        {
            return ((pow(5,n/2+1)%mod)*(pow(4,n/2)%mod))%mod;
        }
        else
        {
            return ((pow(5,n/2)%mod)*(pow(4,n/2)%mod))%mod;
        }
    }
};
// @lc code=end

