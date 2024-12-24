#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    vector <int >passedby(int a, int &b){
        a += 1;
        b +=2;
        return{a,b};
    }
};
int main(){
    Solution sol;
    int a = 1, b=2;
    vector <int >result = sol.passedby(a,b);
    cout << result[0]  << result[1];
   
   return 0;

}