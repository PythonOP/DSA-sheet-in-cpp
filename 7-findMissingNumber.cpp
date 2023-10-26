#include<bits/stdc++.h>
using namespace std;
// int missingNumber(vector<int>& nums){
//     // Bruteforce approach
//     int n = nums.size()-1;
//     for(int i=1;i<=n;i++){
//         int found=0;
//         for(int j=0;j<n;j++){
//             if(nums[j]==i){found=1;break;}
//         }
//         if(found==0){return i;}

//     }
//     //This return will never execute
//     return -1;
// }
int missingNumber(vector<int>& nums,int n) {
    // Optimal Solution
    
    // Sum of 1 to N
    int sum = (n*(n+1))/2;

    // Calculating sum of the array
    int arrSum = 0;
    for(auto it:nums){
        arrSum += it;
    }
    return sum-arrSum;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    //n-1 being a number missing
    for(int i=0;i<n-1;i++)    cin>>a[i];
    // cout << missingNumber(a); //brute call
    cout << missingNumber(a,n-1); //Optimal call
}
// Find the missing number in an array
// https://leetcode.com/problems/missing-number/description/