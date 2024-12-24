#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    string compareNM(int n , int m){
        if(n<m) return "lesser";
        else if(n>m) return "greater";
        else return "equal";
    }
};
int main(){
    Solution sol;
   cout <<  sol.compareNM(4,8);
   return 0;
}