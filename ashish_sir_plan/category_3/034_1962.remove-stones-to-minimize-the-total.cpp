/*
 * @lc app=leetcode id=1962 lang=cpp
 *
 * [1962] Remove Stones to Minimize the Total
 */

// @lc code=start
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

//TLE at 45/59
        // int size = piles.size();
        // sort(piles.begin(),piles.end());

        // int i=0;
        // while(i<k)
        // {
        //     piles[size-1]-=(piles[size-1])/2;
        //     //insertion sort
        //     int key = piles[size-1];
        //     int j=size-2;
        //     while(j>=0 && piles[j]>key)
        //     {
        //         piles[j+1]=piles[j];
        //         --j;
        //     }
        //     // for(auto &value: piles)
        //     //     cout<<value<<" ";
        //     // cout<<endl;
        //     piles[j+1]=key;
        //     ++i;
        // }
        // int sum=0;
        // for(auto &value: piles)
        //     sum+=value;
        // return sum;

        priority_queue<int> heap(piles.begin(),piles.end());
        int totalsum = accumulate(piles.begin(),piles.end(),0);

        for(int i=0;i<k;i++)
        {
            int curr = heap.top();
            heap.pop();
            int remove = curr/2;
            totalsum -=remove;
            curr -= remove;
            heap.push(curr);
        }

        return totalsum;
    }
};
// @lc code=end

