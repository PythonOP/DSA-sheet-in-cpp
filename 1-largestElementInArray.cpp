// ctrl + shift + b to run

//Brute Force Approach
#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
   int largest = arr[0];
   for(int i=0;i<n;i++){
      if(largest < arr[i]) largest = arr[i];
   }
   cout<<largest;
}

int main(){
   int n;
   cin>>n;

   vector<int> arr(n);
   for(int i=0;i<n;i++) cin >> arr[i];
   largestElement(arr,n);
}

// Find the largest element in an array
// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
