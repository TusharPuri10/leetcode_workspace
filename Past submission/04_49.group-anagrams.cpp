/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //brute force O(n^2) //time limit exceeded in 111/118
        
        //vector<vector<string>> result;
        // for(int i=0; i<strs.size(); i++)
        // {
        //     if(strs[i]!=" ")
        //     {   
        //         vector<string> s;
        //         s.push_back(strs[i]);
        //         for(int j=i+1; j<strs.size(); j++)
        //         {
        //             string a = strs[i];
        //             string b = strs[j];

        //             sort(a.begin(), a.end());
        //             sort(b.begin(),b.end());
        //             if(a==b)
        //             {
        //                 s.push_back(strs[j]);
        //                 strs[j]=" ";
        //             }
                    
        //         }
        //         result.push_back(s);
        //         s.clear();
        //     }
        // }
        // return result;

        //hashmap method 1 O(m.logm.n) to be exact
        unordered_map<string, vector<string> > m;
        for(int i=0; i<strs.size(); i++)
        {
            string a = strs[i];
            sort(a.begin(),a.end());
            m[a].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto &value: m)
            result.push_back(value.second);
        return result;

        //hashmap method 2 ??????
        // vector<int> count(26,0);
        // unordered_map<vector<int>, vector<string> > m;
        // for(int i=0; i<strs.size(); i++)
        // {
        //     for(int j=0; j<strs[i].size(); j++)
        //         ++count[strs[i][j]];
        //     m[count].push_back(strs[i]);
        // }
        // vector<vector<string>> result;
        // for(auto &value: m)
        //     result.push_back(value.second);
        // return result;


            
    }
};
// @lc code=end

