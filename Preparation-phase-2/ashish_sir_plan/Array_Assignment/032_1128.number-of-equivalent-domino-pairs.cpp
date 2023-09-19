/*
 * @lc app=leetcode id=1128 lang=cpp
 *
 * [1128] Number of Equivalent Domino Pairs
 */

// @lc code=start
class Solution {
public:
    // int get_pairs(int x)
    // {
    //     if(x<=1)
    //         return x;
        
    //     int temp=0;
    //     for(int i=1;i<=x;i++)
    //         temp+=i;
    //     return temp;
    // }
    // 1 1
    // 2 2 1 2*3/2 = 3
    // 3 3+2+1 3*4/2 = 6
    // 4 4+3+2+1 4*5/2 = 10
    // 5 5+4+3+2+1 5*6/2 = 15
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
        // int size = dominoes.size();
        // for(auto &value: dominoes)
        //     if(value[0]>value[1])
        //         swap(value[0],value[1]);
        // sort(dominoes.begin(),dominoes.end());
        //O(n.logn) = (4*10^4*6) => x*10^4 <1 second
        //Your runtime beats 37.87 % of cpp submissions
        //Your memory usage beats 91.03 % of cpp submissions (22 MB)

        // int total_pairs=0;
        // int equal_dominoes=0;

        // for(int i=1;i<size;i++)
        // {
        //     if(dominoes[i-1]==dominoes[i])
        //     {
        //         ++equal_dominoes;
        //         continue;
        //     }
        //     else
        //     {
        //         // total_pairs+=get_pairs(equal_dominoes);
        //         total_pairs+=((equal_dominoes)*(equal_dominoes+1))/2;
        //         equal_dominoes=0;
        //     }
        // }
        // if(equal_dominoes!=0)
        // {
        //     // total_pairs+=get_pairs(equal_dominoes);
        //     total_pairs+=((equal_dominoes)*(equal_dominoes+1))/2;
        //     equal_dominoes=0;
        // }
        // return total_pairs;

        //if O(n) then use unordered_map and dont do sorting
        //Your runtime beats 78.74 % of cpp submissions
        //Your memory usage beats 99 % of cpp submissions (21.9 MB)

        map<pair<int,int>,int> m;
        int size = dominoes.size();
        for(auto &value: dominoes)
            if(value[0]>value[1])
                m[{value[1],value[0]}]++;
            else
                m[{value[0],value[1]}]++;
        
        int total_pair=0;
        for(auto &value: m)
            if(value.second==1)
                continue;
            else
                total_pair+=(((value.second)*(value.second-1))/2);
        return total_pair;
    }
};
// @lc code=end

