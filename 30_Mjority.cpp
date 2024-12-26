#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;

        // Step 1: Find the candidate for the majority element
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
           if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Step 2: Return the candidate (guaranteed to be the majority element)
        return candidate;
    }
};

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution sol;
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;
    return 0;
}
