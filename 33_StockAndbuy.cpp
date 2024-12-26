#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
  int n = prices.size();      
  if(n == 0) return 0;
  int minprice = INT_MAX;
  int maxprofit = 0;
  for(int i=0; i< n; i++){
    minprice = min(minprice, prices[i]);
  
  int profit = prices[i]- minprice;
  maxprofit= max(maxprofit , profit);
  }
  return maxprofit ;
    }
};
int main(){
    Solution sol;
    vector<int>prices = {7,1,5,3,6,4};
    cout << sol.maxProfit(prices);
    return 0;
}