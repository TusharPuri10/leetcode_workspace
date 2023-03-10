/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int size = letters.size();
        // if(letters[size-1]<= target)
        //     return letters[0];
        
        // int i=size-1;
        // while(i>0 && target<letters[i]) //O(n)
        //     --i;
        // if(i==0 && target<letters[i])
        //     return letters[i];
        // else
        //     return letters[i+1];

        //binary search

        int start = 0, end = size-1;
        int mid;
        int k;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(target<letters[mid])//possible answer
            {
                k=mid;//saving that answer
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return letters[k];
    }
};
// @lc code=end

