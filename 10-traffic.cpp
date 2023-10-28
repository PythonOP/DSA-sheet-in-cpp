#include<bits/stdc++.h>
using namespace std;
// Initial approach
// int traffic(int n, int m, vector<int>& vehicle) {
//     int count = 0;
//     for (int i = 0; i < n; ++i) {
//         if (vehicle[i] == 0 && m > 0) {
//             vehicle[i] = 1;
//             count++;
//             m--;
//         }
//         else if (vehicle[i] == 1) {
//             count++;
//         }
//     }
//     return count;
// }
int traffic(int n, int m, vector<int> vehicle) {
  // Write your code here.
    int ans = 0, count = 0, j = 0;
    for (int i = 0; i < n; i++) {
      while (j < n && count <= m) {
        if (vehicle[j] == 0) {
            count++;
            if (count > m) {
                count--;
                break;
            }
        }
        j++;
      }
      ans = max(ans, j-i);
      if (vehicle[i] == 0) {
          count--;
      }
    }
return ans;
}
// https://www.codingninjas.com/studio/problems/traffic_6682625