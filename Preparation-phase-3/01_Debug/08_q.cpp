/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int k=-1;
    int p;
    if(num&1)
    {
        p=num/2;
    }
    else
    {
        p=num/2-1;
    }
    for(int i=1;i<=num;i++)
    {
        int gap;
        if(i>num/2 + 1)
        {
            gap = i-(num/2)-1;
            k-=2;
        }
        else
        {
            gap = num-p-i;
            k+=2;
        }
        int j=0;
        while(j<gap)
        {
            cout<<" ";
            ++j;
        }
        for(int i1=0;i1<k;i1++)
        {
            cout<<"*";
        }
        j=0;
        while(j<gap)
        {
            cout<<" ";
            ++j;
        }
        cout<<"\n";
    }
}