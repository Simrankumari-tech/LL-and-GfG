#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;

        // Count the number of 0's, 1's, and 2's
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cnt0++;
            else if (nums[i] == 1) cnt1++;
            else cnt2++;
        }

        // Replace the elements in the original array
        for (int i = 0; i < cnt0; i++) nums[i] = 0; // Replace 0's
        for (int i = cnt0; i < cnt0 + cnt1; i++) nums[i] = 1; // Replace 1's
        for (int i = cnt0 + cnt1; i < nums.size(); i++) nums[i] = 2; // Replace 2's
    }
};
int main(){
    int n =7;
    vector<int> nums= {1,1,2,0,1,1,2};
    Solution sol;
    sol.sortColors(nums);
    for(int data : nums){
        cout << data << " ";
    }
    return 0;

}