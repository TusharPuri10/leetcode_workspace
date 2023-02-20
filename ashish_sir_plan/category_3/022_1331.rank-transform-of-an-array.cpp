/*
 * @lc app=leetcode id=1331 lang=cpp
 *
 * [1331] Rank Transform of an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> result;
        vector<pair<int,int> > v;
        int size = arr.size();
        if(size==0)
            return result;
        
        for(int i=0;i<size;i++)
            v.push_back({arr[i],i});
        sort(v.begin(),v.end());

        int rank=1;
        int tmp = v[0].first;
        v[0].first=rank;
        for(int i=1;i<size;i++)
        {
            if(v[i].first==tmp)
            {
                tmp = v[i].first;
                v[i].first = rank;
            }
            else
            {
                tmp = v[i].first;
                ++rank;
                v[i].first = rank;
            }
        }
        for(int i=0;i<size;i++)
        {
            //swapping ranks with position
            int temp = v[i].first;
            v[i].first = v[i].second;
            v[i].second = temp;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<size;i++)
            result.push_back(v[i].second);
        return result;

    }
};
// @lc code=end

