#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int> &arr, int k) {
        int sum = 0; 
        int ans = 0;
        unordered_map<int, int> prefixSumCount;  // To store prefix sums and their frequencies
        
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            // Check if the current prefix sum equals k
            if(sum == k) 
                ans++;
            
            // Check if there's a prefix sum that we can subtract to get sum == k
            if(prefixSumCount.find(sum - k) != prefixSumCount.end()) 
                ans += prefixSumCount[sum - k];
            
            // Store the current prefix sum in the map
            prefixSumCount[sum]++;
        }
        
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int>arr = {1,2,3};
    int k=3;
    cout << sol.countSubarrays(arr,k);
return 0;
}