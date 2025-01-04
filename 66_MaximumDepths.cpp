#include<bits/stdc++.h>
using namespace std;
class Solution{
public :
int maxdepth(string s){
    int ans= 0;
    int openbrackets = 0;
    for(char c: s){
        if(c ==  '(') openbrackets++;
        else if(c == ')') openbrackets--;
        ans = max(ans, openbrackets);
    }
    return ans;
}
};
int main(){
    string s=  "(1+(2*3)+((8)/4))+1";
    Solution sol;
    cout << sol.maxdepth(s);
    return 0;
}