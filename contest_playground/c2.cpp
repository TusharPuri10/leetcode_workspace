class Solution {
public:
    int required_exp(int n)
    {
        int i=0;
        while(pow(2,i)<=n)
        {
            ++i;
        }
        return i-1;
    }
    int minOperations(int n) {
        int sq[18];
        for(int i=0;i<18;i++){
            sq[i]=pow(2,i);
            cout<<sq[i]<<" ";
        }
        int start=0,end=18;
        for(int i=0;i<18;i++)
        {
            if(sq[i]>n)
            {
                start=i-1;
                end=i;
                break;
            }
        }
        int mid = start + (end-start)/2;
        int count=1;
        while(start<mid && mid<end)
        {
            if(n<=mid)//left
            {
                start = start + pow(2,required_exp(mid-start));
                ++count;
            }
            else//right
            {
                end = end - pow(2,required_exp(end-mid));
                ++count;
            }
        }
        return count;

    }
};