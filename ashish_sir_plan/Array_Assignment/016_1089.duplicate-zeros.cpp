/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        // int count=0;
        // for(int i=0;i<size;i++)
        // {
        //     if(arr[i]==0)
        //     {
        //         arr.insert(arr.begin()+i,0);
        //         ++i;
        //         ++count;
        //     }
        // }
        // while(count>0)
        // {
        //     arr.pop_back();
        //     --count;
        // }
        vector<int> v;
        int vsize=0,i=0;
        while(vsize<size)
        {
            if(arr[i]==0)
            {
                v.push_back(0);
                v.push_back(0);
                vsize+=2;
            }
            else{
                v.push_back(arr[i]);
                ++vsize;
            }
            ++i;
        }
        if(vsize>size)
            v.pop_back();
        arr=v;
    }
};
// @lc code=end

