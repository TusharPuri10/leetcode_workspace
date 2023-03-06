/*
 * @lc app=leetcode id=953 lang=cpp
 *
 * [953] Verifying an Alien Dictionary
 */

// @lc code=start
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;
        for(int i=0;i<26;i++)
            m[order[i]]=i;

        int size = words.size();
        
        //checking lexicographical order
        int first_word = 0;

        //two case
        //case - 1 first character can differentiate words
        //case - 2 first few characters are same

        int current_word = 0;
        while(current_word+1<size)
        {
            int current_letter = 0;
            if( m[words[current_word][current_letter]] < m[words[current_word+1][current_letter]] )
                ++current_word;
            else if( m[words[current_word][current_letter]] > m[words[current_word+1][current_letter]] )
                return false;
            else
            {
                ++current_letter;
                while(current_letter<words[current_word].size() && current_letter<words[current_word+1].size())
                {
                    if( m[words[current_word][current_letter]] < m[words[current_word+1][current_letter]] )
                    {
                        ++current_word;
                        goto end;
                    }
                    else if( m[words[current_word][current_letter]] > m[words[current_word+1][current_letter]] )
                        return false;
                    else
                        ++current_letter;
                }
                if(words[current_word].size() <= words[current_word+1].size())
                    ++current_word;
                else
                    return false;
                end:{}
            }
        }
        return true;
    }
};
// @lc code=end

