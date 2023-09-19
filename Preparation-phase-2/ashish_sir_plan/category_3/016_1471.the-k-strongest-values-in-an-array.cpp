/*
 * @lc app=leetcode id=1471 lang=cpp
 *
 * [1471] The k Strongest Values in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int size = arr.size();
        vector<pair<int,int> > v;
        //find median
        sort(arr.begin(),arr.end());
        int median = arr[(size-1)/2];
        
        //making array of pair {arr[i],value}
        for(int i=0;i<size;i++)
            v.push_back({abs(arr[i]-median),arr[i]});
        
        //sorting that array
        sort(v.begin(),v.end(),greater <>());

        //storing in result vector
        vector<int> result;
        for(int i=0;i<k;i++)
            result.push_back(v[i].second);
        return result;
    }
};
// @lc code=end

