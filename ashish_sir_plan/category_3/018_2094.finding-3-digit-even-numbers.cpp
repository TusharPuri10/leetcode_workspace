/*
 * @lc app=leetcode id=2094 lang=cpp
 *
 * [2094] Finding 3-Digit Even Numbers
 */

// @lc code=start
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
     
        vector<int> digit_freq(10,0);
        for(auto &d:digits) ++digit_freq[d];

        vector<int> res;
        for(int i=100;i<=999;i+=2)
        {
            vector<int> curr_freq(10,0);
            int temp=i;
            while(temp)
            {
                ++curr_freq[temp%10];
                temp/=10;
            }
            bool exist=true;
            for(int j=0;j<10;j++){
                if(digit_freq[j]<curr_freq[j]){
                    exist=false;
                    break;
                }
            }
            if(exist)
                res.push_back(i);
        }
        return res;
    }
};
// @lc code=end

