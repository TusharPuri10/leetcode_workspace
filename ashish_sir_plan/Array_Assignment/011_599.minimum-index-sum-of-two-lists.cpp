/*
 * @lc app=leetcode id=599 lang=cpp
 *
 * [599] Minimum Index Sum of Two Lists
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> m;
        int size1 = list1.size();
        int size2 = list2.size();

        for(int i=0;i<size1;i++)
            m[list1[i]]=i;
        
        int min_index_sum=0,flag=0;
        vector<string> result;
        for(int i=0;i<size2;i++)
        {
            if(m.find(list2[i])!=m.end())
            {
                if(flag==0)
                {
                    min_index_sum = i + m[list2[i]];
                    result.push_back(list2[i]);
                    flag=1;
                }
                else
                {
                    if(min_index_sum == i + m[list2[i]])
                        result.push_back(list2[i]);
                    if(min_index_sum > i + m[list2[i]])
                    {
                        min_index_sum = i + m[list2[i]];
                        result.clear();
                        result.push_back(list2[i]);
                    }
                }
            }
        }
        return result;
    }
};
// @lc code=end

