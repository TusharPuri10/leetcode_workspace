/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        string Roman = "IVXLCDM";
        int result = 0,flag=0;
        char first,second=s[0];
        int ind1,ind2;
        for(int i=0; i<Roman.size(); i++)
        {
            if(second==Roman[i])
            {
                if(i%2==0)
                {
                    ind2 = pow(10,i/2);
                }
                else{
                    ind2 = 5*pow(10,i/2);
                }
            }
        }
        result = ind2;
        for(int i=1; i<s.size(); i++)
        {
            first = second;
            ind1 = ind2;
            second = s[i];
            for(int i=0; i<Roman.size(); i++)
            {
                if(second==Roman[i])
                {
                    if(i%2==0)
                    {
                        ind2 = pow(10,i/2);
                    }
                    else{
                        ind2 = 5*pow(10,i/2);
                    }
                } 
            }
            if(ind1>=ind2)
            {
                result = result + ind2;
            }
            else
            {
                result = result + ind2 - (2*ind1); 
            }
        }
        return result;
    }
};
// @lc code=end

