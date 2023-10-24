#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
// Example 1:
// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
vector<int> moveZeros(int n, vector<int> a) {
    // Brute force approach - Initial
    for(int i=n-1;i>0;i--){
        if(a[i-1] == 0){
            a.erase(a.begin()+(i-1));
            a.push_back(0);
        }
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    // for(int i=0;i<n;i++)    cout<<a[i];
    vector<int> res = moveZeros(n,a);
    for(auto it:res)    cout<<it<<" ";
    // cout<<"Test";
}
// Left Rotate the Array by One
// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278
// Leetcode link (morderate problem): https://leetcode.com/problems/rotate-array/solutions/3506340/beats-100-3-line-solution-fully-most-optimised-code/