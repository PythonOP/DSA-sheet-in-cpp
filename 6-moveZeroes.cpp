#include<bits/stdc++.h>
using namespace std;
// Example 1:
// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
// vector<int> moveZeros(int n, vector<int> a) {
//     // Brute force approach - Initial
//     for(int i=n-1;i>0;i--){
//         if(a[i-1] == 0){
//             a.erase(a.begin()+(i-1));
//             a.push_back(0);
//         }
//     }
//     return a;
// }
vector<int> moveZeros(int n, vector<int> a){
    // Optimal approach
    // 2 pointers - i j
    int j=-1;
    // point j to the first 0
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j = i;
            break;
        }
    }
    // all non-zero elements
    if(j==-1)   return a;

    // point i to next index j and start loop
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
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