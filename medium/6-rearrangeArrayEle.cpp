#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Initial Approach with optimised loop
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){pos.push_back(nums[i]);}
            else{neg.push_back(nums[i]);}
        }
        // int j=0,k=0;
        // for(int i=0;i<nums.size();i++){
        //     if(i%2 == 0){nums[i]=pos[j++];}
        //     else{nums[i]=neg[k++];}
        // }
        
        // Optimised loop 
        for(int i=0;i<nums.size()/2;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        return nums;
    }
    // optimal solution
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> ans(nums.size());
       int posIdx=0,negIdx=1;
       for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
               ans[posIdx] = nums[i];
               posIdx += 2;
           }
           else{
               ans[negIdx] = nums[i];
               negIdx += 2;
           }
       }
       return ans;
    }
};