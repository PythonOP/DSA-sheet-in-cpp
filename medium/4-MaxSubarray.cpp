#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Brute Force Approach
    // int maxSubArray(vector<int>& nums) {
    //     int max = INT_MIN;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=0;j<nums.size();j++){
    //             int sum=0;
    //             for(int subIndex = i;subIndex<=j;subIndex++){
    //                 sum += nums[subIndex];
    //             }
    //             if(sum > max)   max = sum;
    //         }
    //     }
    //     return max;
    // }

    //Better Solution
    int maxSubArray(vector<int>& nums) {
        int Max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum += nums[j];
                Max = max(sum,Max);
            }
            
        }
        return Max;
    }
};