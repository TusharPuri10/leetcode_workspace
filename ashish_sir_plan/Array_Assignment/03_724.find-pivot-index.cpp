/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& a) {
        // int start=0,last=a.size()-1;
        // int mid = start + (last-start)/2;
        // int leftsum=0,rightsum=0;
        // for(int i=start;i<mid;i++)
        //     leftsum+=a[i];
        // for(int i=mid+1;i<=last;i++)
        //     rightsum+=a[i];
        // while(start<=last)
        // {
        //     if(leftsum==rightsum)
        //         return mid;
        //     else if(leftsum<rightsum)//mid go to right
        //     {
        //         start=mid+1;
        //         mid = start + (last-start)/2;
        //         leftsum+=a[start-1];
        //         for(int i=start;i<mid;i++)
        //         {
        //             leftsum+=a[i];
        //             rightsum-=a[i];
        //         }
        //         rightsum-=a[mid];
        //     }
        //     else
        //     {
        //         last=mid-1;
        //         mid = start + (last-start)/2;
        //         rightsum+=a[last+1];
        //         for(int i=last;i>mid;i--)
        //         {
        //             leftsum+=a[i];
        //             rightsum-=a[i];
        //         }
        //         leftsum-=a[mid];
        //     }
        // }
        // return -1;
        int rightsum = accumulate(a.begin(),a.end(),0);
        int size = a.size();
        int leftsum = 0;
        for(int i=0;i<size;i++){
            if(leftsum == rightsum-a[i])
                return i;
            else{
                rightsum-=a[i];
                leftsum += a[i];
            }
        }
        return -1;

        
    }
};
// @lc code=end

