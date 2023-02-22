/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    void swap(char& x, char& y)
    {
        char temp = x;
        x = y;
        y = temp;
    }
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int size = t.size();
        if(size==1)
            return t[0];
        for(int i=0;i<size;i++)
        {
            if(s[i]!=t[i])
                return t[i];
        }
        return 'a';
        // int size = t.size();
        // if(size==1)
        //     return t[0];
        
        // for(int i=0;i<size-1;i++)
        // {
        //     char key1 = i;
        //     char key2 = i;
        //     for(int j=i+1;j<size;j++)
        //     {
        //         if(j<size-1 && s[key1]>s[j])
        //             key1=j;
        //         if(t[key2]>t[j])
        //             key2=j;
        //     }
        //     if(s[key1]!=t[key2])
        //         return t[key2];
        //     swap(s[i],s[key1]);
        //     swap(t[i],t[key2]);
        // }
        // return t[size-1];
    }
};
// @lc code=end

