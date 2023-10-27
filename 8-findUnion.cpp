#include<bits/stdc++.h>
using namespace std;
// arr1[] = {1,2,3,4,5}  
// arr2[] = {2,3,4,4,5}
// Output:
//  {1,2,3,4,5}
vector<int> sortedVector(vector <int> a, vector <int> b) {
    // Write your code here
    set<int> res;
    for(auto it:a){
        res.insert(it);
    }
    for(auto it:b){
        res.insert(it);
    }
    vector<int> resVec(res.begin(),res.end());
    return resVec;
}
// find union 
// https://www.codingninjas.com/studio/problems/sorted-array_6613259