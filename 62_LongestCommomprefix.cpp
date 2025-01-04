#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty() ) return "";
        sort(strs.begin() , strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];
        string ans = "";
        for(int i=0; i<first.size() ; i++){
            if(i>= last.size() or first[i]!= last[i]) break;
            ans += first[i];
        }
        return ans;
    }
};
int main(){
    
    Solution sol;
    vector<string> strs = { " flow" , "flower" , "flight"};
    cout << sol.longestCommonPrefix(strs);
    return 0;
}