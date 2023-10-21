#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     // Brute Force approach using sort function
//     sort(a.begin(),a.end());    //In place
//     cout<<"Second largest value:"<<a[n-2]<<endl;
//     cout<<"Second smallest value:"<<a[1]<<endl;

// }
#define Min INT_MIN;
#define Max INT_MAX;
vector<int> getSecondOrderElements(int n, vector<int> a) {
//     Better Approach:
// Find the smallest and largest element in the array in a single traversal
// After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
// Similarly, we would find the largest element which is just smaller than the largest element we just found
// Indeed, this is our second smallest and second largest element.
    int smallest = Max;
    int largest = Min;
    int second_smallest=Max;
    int second_largest=Min;

    for(int i=0;i<n;i++){
        smallest = min(smallest,a[i]);
        largest = max(largest,a[i]);
    }
    
    for(int i=0;i<n;i++){
        if(a[i]<second_smallest && a[i]!=smallest){
            second_smallest = a[i];
        }
        if(a[i]>second_largest && a[i]!=largest){
            second_largest = a[i];
        }
    }
    cout<<"second_smallest"<<second_smallest<<endl;
    cout<<"second_largest:"<<second_largest;

}
// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     //Using single traversal
//     int small=Max;int second_small=Max;
//     int large=Min;int second_large=Min;

// }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    getSecondOrderElements(n,arr);
}
// Find Second Largest Element in an array
// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960