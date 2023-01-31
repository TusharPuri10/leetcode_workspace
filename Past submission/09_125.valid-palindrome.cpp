/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {

            char* start = & s[0];
            char* last = & (s[s.size()-1]);
            again:
            while(start<=last)
            {
                // if((97>(*start)&&(*start)>122)||(65>(*start)&&(*start)>90))
                if((*start)>122 || ((*start)<97 && (*start)>90) || ((*start)<65 && (*start)>57) || ((*start)<48))
                {
                    ++start;
                    goto again;
                }
                // if((97>(*last)&&(*last)>122)||(65>(*last)&&(*last)>90))
                if((*last)>122 || ((*last)>90 && (*last)<97) || ((*last)<65 && (*last)>57) || ((*last)<48))
                {
                    --last;
                    goto again;
                }
                if(*start != *last)
                {
                    // cout<<*start<<" "<<*last<<endl;
                    if(tolower(*start)==tolower(*last))
                        goto end;
                    return false;
                }
                else{
                    end:
                    ++start;
                    --last;
                }
            }
            return true;
    }
};
// @lc code=end

