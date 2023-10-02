#include<iostream>
#include<math.h>
using namespace std;
int decimalToBinary_normal(int n)
{
    int b=0;
    int i=0;
    while(n)
    {
        int bit = n%2;
        b = bit*pow(10,i) + b;
        ++i;
        n/=2;
    }
    return b;
}
int decimalToBinary_bitwise(int n)
{
    int b=0;
    int i=0;
    while(n)
    {
        int bit = n&1;
        b = bit*pow(10,i) + b;
        ++i;
        n = n>>1;
    }
    return b;
}
int main()
{
    int num;
    cin>>num;
    cout<<decimalToBinary_normal(num)<<endl;
    cout<<decimalToBinary_bitwise(num);
    return 0;
}