#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool linearSearch(int x,vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){return true;}
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {
        int longest=1;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            int cnt=1;
            while(linearSearch(x+1,nums)){
                x++;
                cnt++;
            }
            longest = max(longest,cnt);
        }
        
        return longest;
    }
};