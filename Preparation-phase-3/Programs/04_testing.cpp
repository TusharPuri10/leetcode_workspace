#include<iostream>
using namespace std;
int main()
{
    int x = -100;
    x = x>>2;
    cout<<x<<endl;
    return 0;
}

// 5 divides by 2 gives 2.5 -> round down gives -> 2
//-5 divides by 2 gives -2.5 -> round down gives -> -3