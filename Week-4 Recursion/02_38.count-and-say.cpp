/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        
        string str = countAndSay(n-1);
        int size = str.size();
        int count=1;
        string newstr="";
        int i=0;
        for(i=0;i<size-1;i++)
        {
            if(str[i]==str[i+1])
                ++count;
            else
            {
                newstr+=(to_string(count));
                newstr+=(str[i]);
                count=1;
            }
        }
        newstr+=(to_string(count));
        newstr+=(str[i]);
        return newstr;
    }
};
// @lc code=end

