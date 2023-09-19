/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        // 1 sec -> 10^8 or 10^9 instructions

        //sieve of eratostheres
        //ex n=7
        // 0 1 2 3 4 5 6
        if(n==0 || n==1)
            return false;
        vector<bool> v(n,true);
        v[0]=false;
        v[1]=false;
        int count=0;
        for(long i=2;i<n;i++)
        {
            if(v[i]==false)
                continue;
            
            for(long j=i*i;j<n;j=j+i)
                v[j]=false;
            
            ++count;
        }
        return count;

        //time complexity
        // n
        // i = 2    3    4    5    6    7    . . . n
        //     n/2  n/3  -    n/5  -    n/7
        //
        // n(1/2 + 1/3 + 1/5 + 1/7 +1/11 + .....)
        // n.log(logn)
        // O(n.log(logn))

        //
    }
};
// @lc code=end

