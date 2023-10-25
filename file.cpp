#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // vector<int> a(n);
    // for(int i=0;i<n;i++)    cin>>a[i];
    // // for(int i=0;i<n;i++)    cout<<a[i];
    // vector<int> res = moveZeros(n,a);
    // for(auto it:res)    cout<<it<<" ";
    // // cout<<"Test";<<

    int a=5,b=10;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<a<<" "<<b;
}
// Left Rotate the Array by One
// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278
// Leetcode link (morderate problem): https://leetcode.com/problems/rotate-array/solutions/3506340/beats-100-3-line-solution-fully-most-optimised-code/