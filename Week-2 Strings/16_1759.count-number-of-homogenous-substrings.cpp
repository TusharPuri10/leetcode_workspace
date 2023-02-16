/*
 * @lc app=leetcode id=1759 lang=cpp
 *
 * [1759] Count Number of Homogenous Substrings
 */

// @lc code=start
class Solution {
public:
    long long sum(int x)
    {
        int M = 1000000007;
        int sum=0;
        while(x>0)
        {
            sum = ((sum%M) + (x%M))%M;
            --x;
        }
        return sum%M;
    }
    int countHomogenous(string s) {
        long long result=0;
        int M = 1000000007;
        for(int i=0;i<s.size();i++)
        {
            int key=s[i];
            int j=i+1;
            while(s[j]==key && j<s.size())
                ++j;
            result = ((result%M) + (sum(j-i)%M))%M;
            i=j-1;
        }
        return result%M;
    }
};
// @lc code=end

