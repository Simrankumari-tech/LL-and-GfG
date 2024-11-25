#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        
        int largest = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > largest){
                largest=arr[i];
            }
        }
        return largest;
    }
};
int main(){
    vector<int> arr = {34,78,97};
   Solution sol;
   cout << sol.largest(arr);
    return 0;
}
