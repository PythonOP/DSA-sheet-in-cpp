#include<bits/stdc++.h>
using namespace std;
// Brute Force solution - Time limit exceeded 
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        bool superior=true;
        for(int j=i+1;j<a.size();j++){
          if (a[j] >= a[i]) {
            superior = false;
            break;
          }
        }
        if(superior)    ans.push_back(a[i]);
    }
    
    sort(ans.begin(),ans.end());
    return ans;
}

// Optimal Solution
vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    vector<int> ans;

    int max=a[n-1];
    ans.push_back(a[n-1]);

    for(int i=n-2;i>=0;i--){
      if(a[i]>max){
        ans.push_back(a[i]);
        max = a[i];
      }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    // for(int i=0;i<n;i++)    cout<<a[i];
    vector<int> ans=superiorElements(a);
    for(auto it:ans){
        cout<<it<<" ";
    }
    
}
// Find the first repeating element in an array of integers