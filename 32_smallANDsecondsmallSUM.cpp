#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
      int pairWithMaxSum(vector<int> &arr) {
     
        int sum = 0, maxi = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            sum = arr[i] + arr[i + 1];
            maxi = max(maxi, sum);
        }
        return maxi;

    }
};
int main(){
    vector<int>arr= {5,4,3,1,6};
    Solution sol;
    cout << sol.pairWithMaxSum(arr);
    return 0;
}
