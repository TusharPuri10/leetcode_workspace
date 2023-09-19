/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        int k = 1;
        int flag = 0;
        do
        {
            if(flag > 0)
            {
                k = digits[i]/10;
                digits[i] = digits[i]%10;
                --i;
            }
            if(i==-1)
            {
                reverse(digits.begin(),digits.end());
                digits.push_back(k);
                reverse(digits.begin(),digits.end());
                break;
            }
            ++flag;
            digits[i] = digits[i] + k;
        }while(digits[i] > 9);
        return digits;
    }
};
// @lc code=end

