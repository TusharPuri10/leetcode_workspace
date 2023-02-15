/*
 * @lc app=leetcode id=2160 lang=cpp
 *
 * [2160] Minimum Sum of Four Digit Number After Splitting Digits
 */

// @lc code=start
class Solution {
public:
    int minimumSum(int num) {
        int a[4],i=0;
        while(num)
        {
            a[i]=num%10;
            num=num/10;
            ++i;
        }
        int j;
        for(int i=1;i<4;i++)
        {
            int key = a[i];
            j=i-1;
            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                --j;
            }
            a[j+1]=key;
        }
        int x = 10*a[0] + a[2];
        int y = 10*a[1] + a[3];
        return x+y;
    }
};
// @lc code=end

