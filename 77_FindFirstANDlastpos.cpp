#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start =0, end = nums.size()-1;
        vector<int>result(2, -1);
        while(start<= end){
            int mid = start + (end - start)/2;
             if (nums[mid] == target) {
                result[0] = mid;     // Update first occurrence
                end = mid - 1;       // Continue searching in the left half
            } 
            else if (nums[mid] < target)start = mid + 1;
             else end = mid - 1;
            
        }
        start =0, end = nums.size()-1;
           while(start<= end){
            int mid = start + (end - start)/2;
        
            if(nums[mid] == target) {
                result[1] = mid;
                start = mid+1;
            }
           else if(nums[mid] <target) start = mid+1;
            else end = mid-1;
        }
        return result;
    }
};
int main(){
        Solution sol;
        int target = 8;
    vector<int>nums = {5,7,7,8,8,10};
    vector<int> result =  sol.searchRange(nums , target);
    for(auto x : result ){
        cout << x << " ";
    }

    
    return 0;
}