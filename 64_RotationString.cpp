#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string u = s + s;
        if(u.find(goal) != string :: npos){
            return true;
        }
        return false;
        
    }
};
int main(){
    string s = "abcde";
    string goal= "cdeab";
    
    Solution sol;
    if(sol.rotateString(s,goal)){
        cout << " true" ;
    }
    else{
        cout << " false" ;
    }
    return 0;
}


// tle ni ayega :
	//s1 += s1;
  	//return s1.find(s2) != string::npos;