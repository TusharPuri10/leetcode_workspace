/*
 * @lc app=leetcode id=2432 lang=cpp
 *
 * [2432] The Employee That Worked on the Longest Task
 */

// @lc code=start
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        int smallest_id=logs[0][0];
        int longest_time=logs[0][1];
        int current_time;
        int size = logs.size();
        for(int i=1;i<size;i++)
        {
            current_time = logs[i][1]-logs[i-1][1];
            if(current_time>longest_time)
            {
                smallest_id = logs[i][0];
                longest_time = current_time;
            }
            if(current_time==longest_time && logs[i][0]<smallest_id)
            {
                smallest_id = logs[i][0];
            }
        }
        return smallest_id;
    }
};
// @lc code=end

