#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // void rotate(vector<int>& nums, int k) {
    //     k = k % nums.size();
    //     int n=nums.size();
    //     for(int f=0;f<k;f++){
    //         int lastVal=nums[nums.size()-1];
    //         for(int i=n-1;i>0;i--){
    //             nums[i]=nums[i-1];
    //         }
    //         nums[0]=lastVal;
    //     }
        
    //     for(auto it:nums)   cout<<it<<" ";
    // }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            a[(i + k) % nums.size()] = nums[i];
        }
        for (int i = 0; i < n; i++) {
            nums[i] = a[i];
        }
        
        for(auto it:nums)   cout<<it<<" ";
    }
};
// https://leetcode.com/problems/rotate-array/description/