#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int start =0, end = n-1;
        if(n == 1) return nums[0];
        while(start <= end){
            int mid = start + (end - start )/2;
            if(mid == 0 and nums[0] != nums[1]) return nums[mid];
            if(mid == n-1 and nums[n-1] != nums[n-2]) return nums[mid];

            if(nums[mid-1] != nums[mid] and nums[mid] != nums[mid+1]) return nums[mid];
            if(mid % 2 ==0){
                // even
                if(nums[mid-1] == nums[mid]) end = mid-1;
                else start = mid+1;
            }

            else{
               //odd
               if(nums[mid-1] == nums[mid]) start = mid+1;
               else end = mid -1;

            }

        }
        return -1;
    }
};
int main(){
    vector<int > nums = {1,1,2,3,3,4,4,8,8};
    Solution sol;
    cout << sol.singleNonDuplicate(nums);
    return 0;
}