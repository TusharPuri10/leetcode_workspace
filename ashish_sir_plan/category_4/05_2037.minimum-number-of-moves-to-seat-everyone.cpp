/*
 * @lc app=leetcode id=2037 lang=cpp
 *
 * [2037] Minimum Number of Moves to Seat Everyone
 */

// @lc code=start
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int count=0;
        for(int i=0;i<seats.size();i++)
            count += (seats[i]>students[i])?(seats[i]-students[i]):(students[i]-seats[i]);
        return count;
    }
};
// @lc code=end

