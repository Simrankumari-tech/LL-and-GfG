#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findFloorAndCeil(vector<int>& arr, int x) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        
        // Initialize floor and ceil
        int floor = -1, ceil = -1;
        
        // Step 2: Binary Search for Floor
        int start = 0, end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] <= x) {
                floor = arr[mid];  // Update floor
                start = mid + 1;   // Move right to find a larger floor
            } else {
                end = mid - 1;     // Move left
            }
        }

        // Step 3: Binary Search for Ceil
        start = 0, end = arr.size() - 1; // Reset start and end
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= x) {
                ceil = arr[mid];  // Update ceil
                end = mid - 1;    // Move left to find a smaller ceil
            } else {
                start = mid + 1;  // Move right
            }
        }

        return {floor, ceil};
    }
};

int main() {
    vector<int> arr = {5, 6, 8, 9, 6, 5, 5, 6};
    int x = 7;

    Solution sol;
    vector<int> result = sol.findFloorAndCeil(arr, x);

    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;
    return 0;
}
