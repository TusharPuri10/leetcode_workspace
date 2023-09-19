/*
 * @lc app=leetcode id=648 lang=cpp
 *
 * [648] Replace Words
 */

// @lc code=start
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        int max=0;
        int min=100;
        for(int i=0;i<dictionary.size();i++)
        {
            int wordlen = dictionary[i].size();
            if(max<wordlen)
                max = wordlen;
            if(min>wordlen)
                min = wordlen;
        }
        string word,newsentence="";
        // cout<<sentence<<endl;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ' || i==sentence.size()-1)
            {
                if(i==sentence.size()-1)
                    word.push_back(sentence[i]);
                // cout<<word<<" "<<min<<" "<<max<<" "<<word.size()<<endl;
                if(min <= word.size())
                {
                     //loop will break when max reahced or when word is ended
                     int k=0;
                     string root;
                     while(k<max && k<word.size())
                     {
                        root.push_back(word[k]);
                        if(find(dictionary.begin(),dictionary.end(),root)!=dictionary.end())
                        {
                            newsentence+=root;
                            newsentence.push_back(' ');
                            root.clear();
                            goto end;
                        }
                        ++k;
                     }
                     root.clear();
                }
                newsentence+=word;
                newsentence.push_back(' ');
                end:
                word.clear();
            }
            else
                word.push_back(sentence[i]);
        }
        newsentence.pop_back();
        return newsentence;
    }
};
// @lc code=end

