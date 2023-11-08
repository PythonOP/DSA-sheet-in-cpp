#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     // find lowest along with index
    //     // find largest on its right side
    //     int low=INT_MAX;
    //     int lowIndex;
    //     for(int i=0;i<prices.size();i++){
    //         if(prices[i]<low){lowIndex=i;low=min(prices[i],low);};
    //     }
    //     int high=INT_MIN;
    //     int highIndex;
    //     for(int i=lowIndex;i<prices.size();i++){
    //         if(prices[i]>high){highIndex=i;high=max(prices[i],high);}
    //     }
        
    //     return (high-low);
        
    // }
    int maxProfit(vector<int>& prices) {

        //optimal approach
        int maxPro=0;
        int minPrice=INT_MAX;

        for(int i=0;i<prices.size();i++){
            minPrice = min(minPrice,prices[i]);
            maxPro = max(maxPro,prices[i]-minPrice);
        }

        return maxPro;
    }
};