#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1; i>=0 ; i--){
            if( num[i] % 2 != 0) return num.substr(0, i+1);
        }
        return "";
    }
};
int main(){
    string num = "35427";
    Solution sol;
    cout << sol.largestOddNumber(num);
    return 0;
}