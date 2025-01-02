#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length()) return false;
       sort(s.begin() , s.end());
       sort(t.begin() , t.end());
       int m= s.length();
       for(int i =0; i<m ;i++){
        if(s[i] != t[i]) return false;
       }
       return true;

      }
        
    
};
int main(){
    Solution sol;
    string s = "cat";
    string t = "rat";
    if(sol.isAnagram(s,t)){
        cout << "true" ;

    }
    else {
        cout << "false";
    }
    return 0;

 }