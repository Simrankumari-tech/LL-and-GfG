#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int sum=0;
        for(int i=1; i<=n;i++){
            sum =sum + (i*i*i);
       
        }
             return sum;
    }
};
int main(){
    int n;
    cin >> n;
    Solution sol;
    cout <<sol.sumOfSeries(n);
    return 0;
}