/*
 * @lc app=leetcode id=2383 lang=cpp
 *
 * [2383] Minimum Hours of Training to Win a Competition
 */

// @lc code=start
class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int energy_req=energy[0]+1;
        int size = exp.size();
        int req=0;
        if(initialExperience>exp[0])
            exp[0]+=initialExperience;
        else{
            req+=exp[0]-initialExperience+1;
            exp[0]+=(exp[0]+1);
        }
        for(int i=1;i<size;i++)
        {
            if(exp[i-1]>exp[i])
                exp[i]+=exp[i-1];
            else{
                req+=exp[i]-exp[i-1]+1;
                exp[i]+=(exp[i]+1);
            }
            energy_req+=energy[i];
        }
        energy_req-=initialEnergy;
        if(energy_req<0)   energy_req=0;
        if(req<0)   req=0;
        return energy_req+req;
    }
};
// @lc code=end

