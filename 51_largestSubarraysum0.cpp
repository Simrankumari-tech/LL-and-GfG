#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        unordered_map<int,int>mpp;
        int sum=0;
        mpp[0] = -1;
        int longest =0;
        for(int i=0; i<arr.size() ; i++){
          sum += arr[i];
          if(mpp.find(sum) != mpp.end()){
            longest = max(longest , i-mpp[sum]);
          }
          else{
             mpp[sum] = i;
              }
        }
        return longest;
    }
};
int main(){
  vector<int>arr = {15,-2,2,-8,1,7,10,23};
  Solution sol;
  cout << sol.maxLen(arr);
  return 0;
}