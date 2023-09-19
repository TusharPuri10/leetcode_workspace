/*
 * @lc app=leetcode id=1013 lang=cpp
 *
 * [1013] Partition Array Into Three Parts With Equal Sum
 */

// @lc code=start
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        //left sum right sum method

        int right_sum=accumulate(arr.begin(),arr.end(),0);
        // Important Note: The last argument's type is used
        //  not just for the initial value,
        //  but for the type of the result as well.
        //   If you put an int there,
        //    it will accumulate ints even if the vector has float.
        //  If you are summing floating-point
        //   numbers, change 0 to 0.0 or 0.0f (thanks to nneonneo).

        int left_sum1=0;
        int size = arr.size();
        int k;

        for(int i=0;i<size;i++)
        {
            left_sum1+=arr[i];
            right_sum-=arr[i];
            if(2*left_sum1==right_sum){
                k=i;
                goto again;
            }
        }
        return false;
        again:
        int left_sum2=0;
        for(int i=k+1;i<size-1;i++)
        {
            left_sum2+=arr[i];
            right_sum-=arr[i];
            if(left_sum2==right_sum){
                return true;
            }
        }
        return false;

    }
};
// @lc code=end
