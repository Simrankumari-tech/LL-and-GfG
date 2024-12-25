#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> result;
        long long fact = 1;
        int  i=1;
        
        while( fact <= n){
            result.push_back(fact);
            i++;
            fact *= i;
        }
return result;
    }
};
int main(){
    int n;
cin >> n;
    Solution sol;
    vector<long long >result=sol.factorialNumbers(n);
    for(int data : result ){
        cout << data << " ";
    }
    return 0;
}