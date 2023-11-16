class Solution {
public:
    int singleNumber(vector<int>& nums) {
       for(auto it:nums){
           int count=0;
           for(int i=0;i<nums.size();i++){
               if(it == nums[i])   count++;
           }
           if(count==1) return it;
       }
       return -1;
    }  
};