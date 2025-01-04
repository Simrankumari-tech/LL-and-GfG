#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        
        // Step 1: Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Handle the sign
        int sign = 1; // Default sign is positive
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } else if (i < n && s[i] == '+') {
            i++;
        }

        // Step 3: Convert the string to integer
        long long result = 0;
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            i++;
            
            // Step 4: Check for overflow/underflow
            if (result > INT_MAX) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
        }

        // Step 5: Return the result with the sign
        return sign * result;
    }
};
int main(){
    Solution sol;
    string s= "-42";
    cout << sol.myAtoi(s);
    return 0;
}
