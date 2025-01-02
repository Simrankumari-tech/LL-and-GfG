#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        // code here
        stack<char>st;
        for(int i=0; i<s.length() ; i++){
            if(s[i] == '(' or s[i] =='[' or s[i] == '{'){
                st.push(s[i]);
            }
            else{
             if (st.empty()) return false;

            // Check if the top of the stack matches the closing bracket
            if (s[i] == ')') {
                if (st.top() != '(') return false;
                st.pop();  // Pop only when it's a match
            } else if (s[i] == ']') {
                if (st.top() != '[') return false;
                st.pop();  // Pop only when it's a match
            } else if (s[i] == '}') {
                if (st.top() != '{') return false;
                st.pop();  // Pop only when it's a match
            }
            }
            }

        return st.empty();
}
    };
    int main(){
        string s = "{[()]}";
        Solution sol;
        if(sol.isParenthesisBalanced(s)){
            cout << " true ";
        }
        else{
            cout << "false";
        }
return 0;
    }