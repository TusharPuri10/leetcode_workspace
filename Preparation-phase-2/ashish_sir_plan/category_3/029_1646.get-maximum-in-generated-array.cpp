/*
 * @lc app=leetcode id=1646 lang=cpp
 *
 * [1646] Get Maximum in Generated Array
 */

// @lc code=start
class Solution {
public:
    int getMaximumGenerated(int n) {
        int max=0;
        int i=0;
        vector<int> v(n+1);
        while(i<=n)
        {
            if(i==0)
                v[i]=0;
            else if(i==1)
                v[i]=1;
            else
            {
                if(i%2==0)
                    v[i] = v[i/2];
                else
                    v[i] = v[i/2]+v[i-i/2];
            }
            if(max<v[i])
                max=v[i];
            // cout<<v[i]<<" ";
            ++i;
        }
        return max;
    }
};
// @lc code=end

