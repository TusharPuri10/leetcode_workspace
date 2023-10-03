/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int gaps=(n-i),k=1,j=0;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        while(j<count){
            cout<<"*";
            ++j;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
        count+=2;
    }
}