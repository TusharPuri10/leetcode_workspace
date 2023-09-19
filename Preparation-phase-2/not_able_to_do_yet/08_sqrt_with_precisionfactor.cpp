#include <iostream>
using namespace std;

double sqrt(double x, int pf)
{
    double ans;
    int start = 0, end = x;
    int mid = start + (end-start)/2;
    while(start<=end)
    {
        if(mid*mid==x)
        {
            return mid;
        }
        else if( mid*mid < x)
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    double d=1;
    for(int i=0;i<pf;i++)
    {
        d=d/10;
        while(ans*ans <= x)
        {
            ans=ans+d;
            cout<<(ans*ans)<<" "<<x<<" "<<(ans*ans > x)<<endl;
        }
        ans-=d;
    }
    return ans;
}
int main()
{
    cout<<sqrt(1.44,2)<<endl;
    return 0;
}