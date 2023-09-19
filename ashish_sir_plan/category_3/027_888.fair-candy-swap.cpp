/*
 * @lc app=leetcode id=888 lang=cpp
 *
 * [888] Fair Candy Swap
 */

// @lc code=start
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {

        int sizea = a.size(), sizeb = b.size();
        int suma = 0, sumb=0;
        for(int i=0;i<sizea;i++)
            suma+=a[i];
        for(int i=0;i<sizeb;i++)
            sumb+=b[i];
        
        unordered_set<int> as;
        unordered_set<int> bs;
        for(int i=0;i<sizea;i++)
            as.insert(a[i]);
        
        for(int i=0;i<sizeb;i++)
            bs.insert(b[i]);
        for(auto &value: as)
        {
            if(bs.find(value + (sumb-suma)/2) != bs.end())
                return {value,(value + (sumb-suma)/2)};
        }
        return {0,0};
    }
};
// @lc code=end

