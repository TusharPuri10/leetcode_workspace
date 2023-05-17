/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;//by default max heap
        for(auto value: stones)
            pq.push(value);
        
        while(pq.size()>1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x!=y)
            {
                pq.push(x-y);
            }
        }
        if(pq.size()==0)
            return 0;
        else
            return pq.top();

    }
};
// @lc code=end

