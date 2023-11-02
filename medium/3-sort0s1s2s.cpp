#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Brute force
    // void sortColors(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     for(auto it:nums)   cout<<it;
    // }
    
    //Better approach
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)   a++;
            if(nums[i]==1)   b++;
            if(nums[i]==2)   c++;
        }
        
        for(int i=0;i<a;i++)    nums[i]=0;
        for(int i=a;i<a+b;i++)    nums[i]=1;
        for(int i=a+b;i<nums.size();i++)  nums[i]=2;

        for(auto it:nums)   cout<<it;
    }
};
// https://leetcode.com/problems/sort-colors/description/