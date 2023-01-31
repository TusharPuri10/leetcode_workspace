/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int absent_counter = 0;
        int late_counter = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A')
            {
                ++absent_counter;
                late_counter = 0;
            }
            else if(s[i] == 'L')
                ++late_counter;
            else
                late_counter = 0;
            if(late_counter >= 3)
                return false;
            if(absent_counter >= 2)
                return false;
        }
        return true;
    }
};
// @lc code=end

