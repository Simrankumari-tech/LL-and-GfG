#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencysort(string s) {
        unordered_map<char, int> mp;
        string ss = "";
        multimap<int, char, greater<int>> r;  // Use greater<int> to sort in descending order
        
        // Count the frequency of each character
        for(auto x : s) mp[x]++;
        
        // Insert into multimap, sorting by frequency
        for(auto x : mp) {
            r.insert({x.second, x.first});
        }
        
        // Build the result string based on frequency
        for(auto it = r.begin(); it != r.end(); it++) {
            ss += string(it->first, it->second);  // Add the character 'it->second' 'it->first' times
        }
        
        return ss;
    }
};

int main() {
    string s = "tree";
    Solution sol;
    cout << sol.frequencysort(s);  // Expected output: "eert" or "eetr" depending on sorting
    return 0;
}
