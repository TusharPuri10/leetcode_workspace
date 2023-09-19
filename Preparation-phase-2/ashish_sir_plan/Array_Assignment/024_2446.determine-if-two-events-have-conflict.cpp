/*
 * @lc app=leetcode id=2446 lang=cpp
 *
 * [2446] Determine if Two Events Have Conflict
 */

// @lc code=start
class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        
        // aa:ma   cc:mc event 1
        // pp:mp   rr:mr event 2

        // pp:mp   rr:mr event 2  ["10:33","18:15"]
        // aa:ma   cc:mc event 1  ["16:53","19:00"]


        // event 1 is starting earlier (aa < pp )|| (aa == pp && ma<mp)
            // if(pp < cc)
                    //false
            // else if(pp == cc && mp <= mc)

        //event 2 is starting earlier

        string aa = event1[0];
        string cc = event1[1];
        string pp = event2[0];
        string rr = event2[1];
        int c=0,p=0,a=0,r=0;
        int mc=0,mp=0,ma=0,mr=0;
        for(int i=0;i<2;i++)
        {
            a = a + int(aa[i]-'0');
            c = c + int(cc[i]-'0');
            p = p + int(pp[i]-'0');
            r = r + int(rr[i]-'0');
            ma = ma + int(aa[i+3]-'0');
            mc = mc + int(cc[i+3]-'0');
            mp = mp + int(pp[i+3]-'0');
            mr = mr + int(rr[i+3]-'0');
            a*=10;
            c*=10;
            p*=10;
            r*=10;
            ma*=10;
            mc*=10;
            mp*=10;
            mr*=10;
        }
        if(a<p || (p==a && ma<mp))
        {
            if((p<c)||(p==c && mp<=mc))
            {
                // if(r<c || (r==c && mr<mc))
                //     return false;
                // else
                    return true;
            }
            else
                return false;
        }
        else if(a>p || (p==a && ma>mp))
        {
            if((a<r)||(a==r && ma<=mr))
            {
                // if(c<r || (c==r && mc<mr))
                //     return false;
                // else
                    return true;
            }
            else
                return false;
        }
        else
            return true;
    }
};
// @lc code=end

