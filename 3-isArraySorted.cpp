#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
//brute force approach: use 2 nested loops
// loop 1(i): 0 to n-1
// loop 2(j): i+1 to n-1
// check if a[i] > a[j] return false/0; else outside return true/1; 
int isSorted(int n, vector<int> a) {
    // Optimal Approach
    // check the left side element if small continue else break out and return 0
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    return flag;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    cout<<isSorted(n,arr);    
}
// Check if an Array is Sorted
// https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957