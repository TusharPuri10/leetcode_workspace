#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int num)
{
    int dec=0;
    int i=0;
    while(num)
    {
        dec+=((num%2)*pow(2,i));
        ++i;
        num/=10;
    }
    return dec;
}
int main()
{
    int num;
    cin>>num;
    cout<<binaryToDecimal(num);
    return 0;
}