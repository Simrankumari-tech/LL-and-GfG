#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ispalindrome(string s) {
        string filtered = "";
        for(char c : s){
            if(isalnum(c)){
            filtered += tolower(c);
        }   
        }
        string reversed = filtered ;
        reverse(reversed.begin() , reversed.end());
        return filtered == reversed;
    }
};
int main(){
Solution sol;
string nums = "A man, a plan, a canal: Panama" ;
cout <<(sol.ispalindrome(nums) ? true : false);
return 0;


}