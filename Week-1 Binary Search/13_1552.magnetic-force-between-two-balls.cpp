/*
 * @lc app=leetcode id=1552 lang=cpp
 *
 * [1552] Magnetic Force Between Two Balls
 */

// @lc code=start
class Solution {
public:
    bool ispossible(vector<int>& position, int m, int minforce)
    {
        int balls=1;
        int last=0;
        int i;
        for(i=1;i<position.size();i++)
        {
            if(position[i]-position[last]>=minforce)
            {
                ++balls;
                last=i;
                if(balls==m)
                    return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=0,end=position[position.size()-1]-position[0];
        int mid = start + (end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if(ispossible(position,m,mid))
            {
                ans = mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};
// @lc code=end

