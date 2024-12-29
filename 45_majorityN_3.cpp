#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;
        int n = nums.size();

        // Count the frequency of each element
        for (int num : nums) {
            freq[num]++;
        }

        // Check which elements appear more than n/3 times
        for (auto&x : freq) {
            if (x.second > n / 3) {
                result.push_back(x.first);
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums = {3, 2, 3};
    Solution sol;
    vector<int> result = sol.majorityElement(nums);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
