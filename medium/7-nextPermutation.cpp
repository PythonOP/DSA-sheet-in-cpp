#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Initial approach - time limit exceeded
    // next_permuation is expensive in terms of time
    void nextPermutation(vector<int>& nums) {
        //Using built-in function
        for(int i=0;i<factorial(nums.size());i++){
            next_permutation(nums.begin(),nums.end());
            for(int j=0;j<nums.size();j++){
                cout<<nums[j]<<" ";
            }
            cout<<endl;
        }
    }
    int factorial(int n){
        long ans;
        for(int i=1;i<=n;i++){ans *= i;}
        return ans;
    }
};