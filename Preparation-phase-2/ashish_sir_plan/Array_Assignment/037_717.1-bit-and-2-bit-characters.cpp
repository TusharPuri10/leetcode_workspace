/*
 * @lc app=leetcode id=717 lang=cpp
 *
 * [717] 1-bit and 2-bit Characters
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int size = bits.size();
        int i=0;
        while(i<size-1) //O(n)
        {
            if(bits[i]==1)
                i+=2;
            else
                i++;
        }
        if(i==size-1)
            return true;
        else
            return false;
    }
};
// @lc code=end

