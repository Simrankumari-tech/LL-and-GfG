#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int findFloor(vector<int>&arr , int k){

       // lower bound (smallest index)
      int start = 0, end = arr.size() - 1;
        int result = -1; // Initialize to -1 for no floor.

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] <= k) {
                result = mid; // Update result to the current index.
                start = mid + 1; // Search in the right half for a larger floor.
            } 
            else {
                end = mid - 1; // Search in the left half.
            }
        }

        return result;

    }
      
    
};
int main(){
    vector<int>arr = {1,2,8,10,11,12,19};
    int k =5;
    Solution sol;
    cout << sol.findFloor(arr , k);
    return 0;
}