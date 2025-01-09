#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int floorsqrt(int n) {
        if (n == 0 || n == 1) {
            return n; // Square root of 0 or 1 is the number itself
        }

        int start = 0, end = n, ans = 0;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if mid*mid is less than or equal to n
            if (mid * mid <= n) {
                ans = mid;        // Store the potential answer
                start = mid + 1;  // Move to the right half
            } else {
                end = mid - 1;    // Move to the left half
            }
        }

        return ans;
    }
};

int main() {
    int n = 11;
    Solution sol;
    cout << sol.floorsqrt(n) << endl; // Expected Output: 3
    return 0;
}
