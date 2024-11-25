#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int second_largest = INT_MIN;
        int largest = INT_MIN;
    for(int i= 0; i<arr.size() ; i++){
        if(arr[i] > largest){
            second_largest= largest;
            largest = arr[i];

        }
      else if(arr[i] > second_largest && arr[i] <largest){
        second_largest= arr[i];
      }
    }
      if(second_largest== INT_MIN){
        return -1;
      }
    

return second_largest;
    }
  };
  int main(){
    vector<int>arr = {6,8,45,98};
 Solution sol;
   cout << sol.getSecondLargest(arr);


  }
