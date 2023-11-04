#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Brute force approach with subarray generate
    int len=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            long long sum=0;
            for(int f=i;f<=j;f++){
                sum += a[f];
            }
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
    // O(n3)
}
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Still a brute force approach but O(n2)
    int len=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = longestSubarrayWithSumK(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

