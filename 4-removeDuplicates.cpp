#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Brute force approach - Inital 
    /* Note: Traverse from behind because modifying the vector while 
             iterating though leads to some incorrect behaviour.
    */
    for (int i = n - 1; i > 0; --i) {
        if (arr[i] == arr[i - 1]) {
            arr.erase(arr.begin() + i);
        }
    }
    n = arr.size();
    return n;
}
#include<set>
int removeDuplicates(vector<int> &arr, int n) {
	// Brute force approach 
    /* Since we are talking about unique elements,
        we can use 'set' datastructure.
    */
    set<int> st;
    for(int i=0;i<n;i++){    //N
        st.insert(arr[i]);   //logN
    }
    int index=0;
    for(auto it:st){       //N
        arr[index]=it;
        index++;
    }
    // Total: 0(NlogN + N)
    
    return index;
}
int removeDuplicates(vector<int> &arr, int n) {
    // Optimal approach
    // Using 2 pointers i & j
	int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    // for(int i=0;i<n;i++)    cout<<a[i];
    removeDuplicates(a,n);
}
// Remove Duplicates in-place from Sorted Array
// https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307