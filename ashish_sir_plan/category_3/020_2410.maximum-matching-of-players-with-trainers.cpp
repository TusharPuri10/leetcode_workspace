/*
 * @lc app=leetcode id=2410 lang=cpp
 *
 * [2410] Maximum Matching of Players With Trainers
 */

// @lc code=start
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int player_size = players.size();
        int trainer_size = trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int ip=0,it=0;
        int count=0;
        while(ip<player_size && it<trainer_size)
        {
            if(players[ip]<=trainers[it])
            {
                ++count;
                ++ip;
                ++it;
            }
            else
            {
                ++it;
            }
        }
        return count;
    }
};
// @lc code=end

