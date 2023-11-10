#include<bits/stdc++.h>
using namespace std;
int repeatingEle(vector<int> a){
    int n = a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    return -1;
}
int main(){
    // int n;
    // cin>>n;
    // vector<int> a(n);
    // for(int i=0;i<n;i++)    cin>>a[i];
    // for(int i=0;i<n;i++)    cout<<a[i];
    // cout<<"\nRepeating Element:"<<repeatingEle(a);
}
// Find the first repeating element in an array of integers