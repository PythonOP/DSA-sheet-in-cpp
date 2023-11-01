#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Initial Brute force approach

    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> res(2);
    //     for(int i=0;i<nums.size()-1;i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]+nums[j] == target){
    //                 res[0] = i;
    //                 res[1] = j;
    //                 return res;
    //             }
    //         }
    //     }
    // return res;
    // }

    //Optimal solution using Hashmap
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hmap;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int more = target-num;
            if(hmap.find(more)!=hmap.end()){
                return {hmap[more],i};
            }
            hmap[num]=i;
        }
        return {-1};
    }
};
// https://leetcode.com/problems/two-sum/description/