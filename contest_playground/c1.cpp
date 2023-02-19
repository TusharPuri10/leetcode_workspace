class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int i1=0,i2=0;
        vector<vector<int> > result;
        while(i1<size1 && i2<size2)
        {
            //if index equal and equal to counter
            if(nums1[i1][0]==nums2[i2][0])
            {
                result.push_back({counter,nums1[i1][1]+nums2[i2][1]});
                ++i1;
                ++i2;
            }
            else if(nums1[i1][0]>nums2[i2][0])
            {
                result.push_back({counter,0});
                ++i2;
                ++counter;
            }
            else
            {
                result.push_back({counter,nums1[i1][1]});
                ++i1;
                ++counter;
            }
        }
        while(i1<size1)
        {

            result.push_back({counter,nums1[i1][1]});
            ++i1;
        }
        while(i2<size2)
        {
            result.push_back({counter,nums2[i2][1]});
            ++i2;
        }
    }
};