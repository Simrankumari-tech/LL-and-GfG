#include<bits/stdc++.h>
using namespace std; 



 class Solution {
public:

 bool canShip(vector<int>& weights, int days, int capacity) {
        int currentWeight = 0, dayCount = 1;
        for (int weight : weights) {
            if (currentWeight + weight > capacity) {
                dayCount++;  // Move to the next day
                currentWeight = 0;
            }
            currentWeight += weight;

            if (dayCount > days) return false;  // Exceeded the allowed days
        }
        return true;
    }


    int shipWithinDays(vector<int>& weights, int days) {
     int start = *max_element(weights.begin() , weights.end());
     int end = accumulate(weights.begin() , weights.end() , 0);
    int result = end;
     while(start <= end){
            int mid = start + (end - start )/2;
            if(canShip(weights, days , mid)){
                result = mid ;
                end = mid -1 ;
            }
            else start = mid +1;
        }
        return result;
    }
};
int main() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;

    Solution sol;
    cout << "Minimum ship capacity: " << sol.shipWithinDays(weights, days) << endl;

    return 0;
}