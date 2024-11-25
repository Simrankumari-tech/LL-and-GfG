#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for(int i= 0; i<arr.size() -1 ; i++){
            if(arr[i] >arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    vector<int>arr = { 5,7,8,17};
    Solution sol;
    cout <<( sol.arraySortedOrNot(arr) ? "true " : "false");
    return 0;
}