#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int start =0, end = nums.size()-1;
        while(start <= end){
            int mid = start +(end - start )/2;
            if(nums[mid] == target) return true;
             if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
                start++;
                end--;
            }
            else if(nums[start] <= nums[mid]){
                // left sorted hai
                if(nums[start] <= target and target<=nums[mid]){
                    end = mid-1;
                }
                else start = mid+1;
            }

            else{
                if(nums[mid] <target and target<= nums[end]){
                    start = mid+1;
                }
                else end = mid-1;
            }
        }

    return false;
    
    }
};
int main(){
    vector<int>nums = {4,5,6,7,0,1,2};
    int target =0;
    Solution sol;
    cout << sol.search(nums , target);
    return 0;
}