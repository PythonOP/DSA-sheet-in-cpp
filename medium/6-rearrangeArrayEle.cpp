#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Initial Approach
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){pos.push_back(nums[i]);}
            else{neg.push_back(nums[i]);}
        }
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){nums[i]=pos[j++];}
            else{nums[i]=neg[k++];}
        }
        return nums;
    }
};