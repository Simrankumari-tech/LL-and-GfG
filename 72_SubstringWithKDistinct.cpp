#include <bits/stdc++.h>
using namespace std;
 // glt hai
int countDistinctSubstringsWithKDistinct(string s, int k) {
    int n = s.length();
    int left = 0, right = 0;
    unordered_map<char, int> freq;
    unordered_set<string> uniqueSubstrings;

    while (right < n) {
        // Add the current character to the frequency map
        freq[s[right]]++;

        // If distinct characters exceed k, shrink the window
        while (freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }

        // If the window has exactly k distinct characters
        if (freq.size() == k) {
            // Add all substrings from left to right to the set
            for (int i = left; i <= right; i++) {
                uniqueSubstrings.insert(s.substr(i, right - i + 1));
            }
        }

        // Expand the window
        right++;
    }

    return uniqueSubstrings.size();
}

int main() {
    string s = "aba";
    int k = 2;
    cout << countDistinctSubstringsWithKDistinct(s, k) << endl; // Output: 3
    return 0;
}
