#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int max =0, start =0,end=0;
     bool ispallindrome(const string&s , int i,int  j){
        while(i<j){
        if(s[i] != s[j]) return false;
        i++,j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n= s.length();
        for(int i=0; i< n ; i++){
            for(int j=i ; j<n ;j++){
                if(ispallindrome(s,i,j)){
                    if((j-i+1 ) > max){
                        max = j-i+1;
                        start =i;
                        end = j;
                    }
                }
            }
        }
        return s.substr(start , end-start+1);
    }
};
int main(){
    Solution sol;
    string s = "babad";
    cout << sol.longestPalindrome(s) ;
    return 0;
}
























