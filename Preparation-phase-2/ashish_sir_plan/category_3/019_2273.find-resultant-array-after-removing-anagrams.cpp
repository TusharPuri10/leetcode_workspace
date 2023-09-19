/*
 * @lc app=leetcode id=2273 lang=cpp
 *
 * [2273] Find Resultant Array After Removing Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int size = words.size();
        if(size==1)
            return words;

        int i=1;
        int freq[26] = {0};
        int flag=0;
        while(i<size)
        {
            if(words[i-1].size()==words[i].size())
            {
                for(int j=0;j<words[i-1].size();j++)
                {
                    freq[words[i-1][j]-'a']++;
                    freq[words[i][j]-'a']--;
                }
                for(int j=0;j<26;j++)
                {
                    if(freq[j]!=0){
                        flag=1;
                        freq[j]=0;
                    }
                }
                if(flag==1)
                    goto end;
                words.erase(words.begin()+i);
                --size;
            }
            else{
                end:
                ++i;
                flag=0;
            }
        }
        return words;
    }
};
// @lc code=end

