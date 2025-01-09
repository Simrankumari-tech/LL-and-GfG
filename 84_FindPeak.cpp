#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          int start =0,end = nums.size()-1;
        while(start < end){
            int mid = start + (end-start)/2;
            if(nums[mid] < nums[mid+1]){
                
                start = mid+1;
            }
            else end = mid;
        }
        return start;  // single element ho
    }
};
    
int main(){
    vector<int>nums = {1,2,3,1};

    Solution sol;
    cout << sol.findPeakElement(nums);
    return 0;
}