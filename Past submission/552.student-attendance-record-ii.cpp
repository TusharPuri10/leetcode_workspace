/*
 * @lc app=leetcode id=552 lang=cpp
 *
 * [552] Student Attendance Record II
 */

// @lc code=start
class Solution {
public:
     int checkRecord(int n) {
         int M = 1e9 + 7;
    vector<int> p,l,a;
    int pr,la,ab,m;
    int k=1,i=0;
    if(n==1)
        return 3;
    while(i<=2)
    {
        p.push_back(k);
        l.push_back(k);
        a.push_back(k);
        if(i==1)
            k=3;
        ++i;
    }
    a[2]=2;
    if(n==2)
        goto END;
    p.push_back(8);
    l.push_back(7);
    a.push_back(4);
    ++i;
    while(i<=n)
    {
        pr = ((l[l.size()-1])%M + (a[a.size()-1])%M)%M;
        pr = (pr + (p[p.size()-1])%M)%M;
        m = (p[i-3] + a[i-3])%M;
        la = (pr - m + M)%M;
        ab = (2*((a[a.size()-1])%M))%M;
        ab = (ab - a[i-4] + M)%M;
        p.push_back(pr);
        l.push_back(la);
        a.push_back(ab);
        ++i;
    }
    END:
    return (((p[p.size()-1])%M + (l[l.size()-1])%M)%M + (a[a.size()-1])%M)%M;
     }
};
// @lc code=end

