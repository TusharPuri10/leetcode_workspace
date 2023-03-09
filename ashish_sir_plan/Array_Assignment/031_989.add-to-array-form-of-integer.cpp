/*
 * @lc app=leetcode id=989 lang=cpp
 *
 * [989] Add to Array-Form of Integer
 */

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

//very wrong approach
//You had to ask the memory limit that is length of num
//int cannot store an integer of length 10^4;

        // int n1=0;
        // for(auto &value:num)
        // {
        //     n1*=10;
        //     n1+=value;
        // }
        // n1+=k;
        // vector<int> result;
        // while(n1)
        // {
        //     result.push_back(n1%10);
        //     n1/=10;
        // }
        // reverse(result.begin(),result.end());
        // return result;

//new appraoch
    //convert k to array and write an algorithm to add two arrays

    //converting k to array num2
    // vector<int> num2;
    // while(k)
    // {
    //     num2.push_back(k%10);
    //     k/=10;
    // }
    // reverse(num2.begin(),num2.end());

    int size1 = num.size();
    // int size2 = num2.size();


    //adding two arrays
    int carry=0;
    int i1=size1-1;
    // int i2=size2-1;

    
    //case 1 same length no end carry
    // 2 2 2 2
    // 3 3 3 3
    // 5 5 5 5

    //case 2 same length end carry generated
    // 9 2 2 2
    // 3 3 3 3
// (1) 2 5 5 5

    //case 3 different length no end carry 
    // 2 2 2 2
    //     5 5
    // 2 2 7 7

    //case 4 different length end carry generated
    // 2 2 9 2
    //     5 5
    // 2 3 4 7
    vector<int> result;
    int a;
    while(i1>=0 && k!=0)
    {
        a = num[i1]+(k%10)+carry;
        carry = a/10;
        a = a%10;
        result.push_back(a);
        --i1;
        k/=10;
    }
    while(i1>=0)
    {
        a = num[i1]+carry;
        carry = a/10;
        a = a%10;
        result.push_back(a);
        --i1;
    }
    while(k!=0)
    {
        a = (k%10)+carry;
        carry = a/10;
        a = a%10;
        result.push_back(a);
        k/=10;
    }
    if(carry!=0)
        result.push_back(carry);
    reverse(result.begin(),result.end());
    return result;
    }
};
// @lc code=end

