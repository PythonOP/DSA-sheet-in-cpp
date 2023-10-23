#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
// Sample Input 1:
// 4
// 5 7 3 2 
// Sample Output 1:
// 7 3 2 5
// vector<int> rotateArray(vector<int>& arr, int n) {
//    // Brute force approach
//    int firstVal = arr[0];
//    vector<int> temp(n);
//    for(int i=1;i<n;i++){
//     temp[i-1]=arr[i];
//    }
//    temp[n-1] = firstVal;
    
//     // for(auto it:temp)   cout<<it<<" ";
//     return temp;
// }
vector<int> rotateArray(vector<int>& arr, int n) {
   // Optimal approach without using 2nd dummy array
   int firstVal = arr[0];
   for(int i=0;i<n-1;i++){
    arr[i] = arr[i+1];
   }
    arr[n-1] = firstVal;
    // for(auto it:arr)   cout<<it<<" ";
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    // for(int i=0;i<n;i++)    cout<<a[i];
    int k;
    cin>>k;
    rotateArray(a,n);
}
// Left Rotate the Array by One
// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278
// Leetcode link (morderate problem): https://leetcode.com/problems/rotate-array/solutions/3506340/beats-100-3-line-solution-fully-most-optimised-code/