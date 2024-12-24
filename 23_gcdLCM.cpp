#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int GCD(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int LCM(int a , int b){
        return (a *b )/GCD(a,b);
    }
    vector<int> lcmAndGcd(int a, int b){
        int gcd = GCD(a,b);
        int lcm = LCM(a, b);
        return {lcm , gcd};

    }
};
int main(){
    Solution sol;
    int a = 48,b=18;
    vector<int>result = sol.lcmAndGcd(a,b);
    cout << result[0] <<" " << result[1];
    return 0;
}