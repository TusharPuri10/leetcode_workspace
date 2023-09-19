/*
 * @lc app=leetcode id=1184 lang=cpp
 *
 * [1184] Distance Between Bus Stops
 */

// @lc code=start
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        // let d1 be clock wise direction  = start -> destination
        // let d2 be counter clock wise direction = destination -> start

        int d1 = 0;
        int i = start;
        int size = distance.size();
        while(i!=destination)
        {
            d1 += distance[i];
            ++i;
            if(i>=size)
                i = size%i;
        }

        int d2 = 0;
        while(i!=start)
        {
            d2+= distance[i];
            ++i;
            if(i>=size)
                i = size%i;
        }

        return (d2>=d1)?(d1):(d2);
    }
};
// @lc code=end

