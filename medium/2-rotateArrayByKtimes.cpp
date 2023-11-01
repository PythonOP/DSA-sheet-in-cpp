#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // void rotate(vector<int>& nums, int k) {
    //     //Initial Approach
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
    // void rotate(vector<int>& nums, int k) {
    //     // Better approach using extra vector
    //     int n=nums.size();
    //     vector<int> a(n);
        
    //     for (int i = 0; i < n; i++) {
    //         a[(i + k) % nums.size()] = nums[i];
    //     }
    //     for (int i = 0; i < n; i++) {
    //         nums[i] = a[i];
    //     }
        
    //     for(auto it:nums)   cout<<it<<" ";
    // }
    void rotate(vector<int>& nums, int k) {
        // Best solution with O(n) time and O(1) space
        int n=nums.size();
        // sort doesn't work because we don't want to change the order of the values in test cases
        // sort(nums.begin(),nums.end(),greater<int>());
        // sort(nums.begin(),nums.begin()+k);
        // sort(nums.begin()+k,nums.end());

        k = k % n; //if k>=n
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        for(auto it:nums)   cout<<it<<" ";
    }
};