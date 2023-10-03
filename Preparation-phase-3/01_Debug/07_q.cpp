/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int k=1;
    for(int i=1;i<=num;i++)
    {
        int gap = num-i;
        int j=0;
        while(j<gap)
        {
            cout<<" ";
            ++j;
        }
        int i1 = i;
        while(i1<k)
        {
            cout<<i1;
            ++i1;
        }
        while(i1>=i)
        {
            cout<<i1;
            --i1;
        }
        k+=2;
        j=0;
        while(j<gap)
        {
            cout<<" ";
            ++j;
        }
        cout<<"\n";
    }
}