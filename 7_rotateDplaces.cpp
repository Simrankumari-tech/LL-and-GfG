#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensure k is within the bounds of the array size

        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    
    Solution sol;
    sol.rotate(nums, 2);
    for(int data : nums){
        cout << data ;
    }
        return 0;
    
}