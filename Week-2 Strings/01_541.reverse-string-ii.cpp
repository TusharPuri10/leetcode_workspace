/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */

// @lc code=start
class Solution {
public:
    void swap(char& x, char& y)
    {
        char temp = x;
        x = y;
        y = temp;
    }
    void reverse(string& s,int start, int end)
    {
        int i=start,j=end;
        while(i<=j)
            swap(s[i++],s[j--]);
    }
    string reverseStr(string s, int k) {
        int start = 0;
        while(start + k -1 < s.size())
        {   
            reverse(s,start,start+k-1);
            start=start+2*k;
        }
        reverse(s,start,s.size()-1);
        return s;

    }
};
// @lc code=end

