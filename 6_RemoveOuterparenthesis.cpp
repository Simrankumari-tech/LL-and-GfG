#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int balance =0;
        for(auto x : s){
            if(x == '('){
                if(balance >0) ans.push_back(x);
                balance++;
            }
            else{
               balance--;
               if(balance>0) ans.push_back(x);
                
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    string s = "(()())(())" ;
   cout <<  sol.removeOuterParentheses(s);
   return 0;
}