/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        vector<vector<string>> result;
        vector<string> anagram;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i] != "A")
            {
                anagram.push_back(strs[i]);
                string temp1 = strs[i];
                sort(temp1.begin(),temp1.end());
                int j=i+1;
                while(j<strs.size() && (strs[i].size() == strs[j].size()))
                {
                    string temp2 = strs[j];
                    sort(temp2.begin(),temp2.end());
                    if(temp1 == temp2)
                    {
                        anagram.push_back(strs[j]);
                        strs[j] = "A";
                    }
                    ++j;
                }
                result.push_back(anagram);
                anagram.clear();
            }
        }
        return result;
    }
};
// @lc code=end

