#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int uniqueindex =0;
        for(int i =0; i<arr.size() ; i++){
            if(arr[i] != arr[uniqueindex]){
                uniqueindex++;
                arr[uniqueindex] = arr[i];
            }

        }
        return uniqueindex+1;
    }
};
