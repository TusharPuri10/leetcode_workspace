/*
 * @lc app=leetcode id=1566 lang=cpp
 *
 * [1566] Detect Pattern of Length M Repeated K or More Times
 */

// @lc code=start
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int target) {

// 1 2 3  1 2 3  1 2 x  1 2 3  1 2 3  1 2 3
// 0 1 2  3 4 5  6 7 8
        vector<int> prev;
        vector<int> next;

        //prev window
        for(int i=0;i<m;i++)
            prev.push_back(arr[i]);
        
        int j=m;
        int size=arr.size();
        int counter=1;
        while(j+m<=size)
        {
            //next window
            for(int k=j;k<j+m;k++)
                next.push_back(arr[k]);
            
            // for(auto x:prev)
            //     cout<<x<<" ";
            // cout<<endl;
            // for(auto x:next)
            //     cout<<x<<" ";
            // cout<<endl<<endl;
            
            if(prev==next){
                ++counter;
                next.clear();
            }
            else{
                // prev=next;
                prev.erase(prev.begin());
                prev.push_back(arr[j]);
                j-=(m-1);
                counter=1;
                next.clear();
            }

            if(counter==target)
                return true;
    

            if(j+m>=size)
                return false;
            else
                j+=m;
        }
        return false;
    }
};
// @lc code=end

