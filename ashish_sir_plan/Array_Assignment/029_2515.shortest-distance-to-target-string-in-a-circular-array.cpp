/*
 * @lc app=leetcode id=2515 lang=cpp
 *
 * [2515] Shortest Distance to Target String in a Circular Array
 */

// @lc code=start
class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        // "ab","cd","ef","gh","ij","kl";
        // start index = 3; -> gh
        // target cd;
        // <- p1 p2 -> ==== d
        // untill p1!=p2 search for target

        int size = words.size();
        if(target == words[startIndex])
            return 0;
        int p1=startIndex-1;
        int p2 = startIndex+1;

        if(p1==-1)
            p1=size-1;
        if(p2==size)
            p2=0;
        
        int d=1;
        while(p1!=p2)
        {
            if(words[p1]==target || words[p2]==target)
                return d;
            ++d;
            ++p2;
            --p1;
        if(p1==-1)
            p1=size-1;
        if(p2==size)
            p2=0;
        }
        if(words[p1]==target || words[p2]==target)
                return d;
        return -1;

    }
};
// @lc code=end

