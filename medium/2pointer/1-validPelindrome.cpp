#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Optimal solution using 2 pointers
    // isalnum,isalpha, isdigit
    // tolower, toupper
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(!isalnum(s[i])){i++;continue;}
            if(!isalnum(s[j])){j--;continue;}
            if(tolower(s[i])!=tolower(s[j])){return false;}
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
// https://leetcode.com/problems/valid-palindrome/submissions/