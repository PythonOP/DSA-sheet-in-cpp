#include<bits/stdc++.h>
using namespace std;
// Input: nums = [1,1,0,1,1,1]
// Output: 3
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;int maxCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)  count++;
            else if(nums[i]==0){
                if(maxCount < count){maxCount = count; count = 0;}
                else{count=0;}
            } 
        }
        return max(maxCount,count);
    }
};
// https://leetcode.com/problems/max-consecutive-ones/description/