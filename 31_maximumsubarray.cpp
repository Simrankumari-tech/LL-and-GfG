#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int sum = 0, ans = INT_MIN;
        for(int i=0; i<nums.size() ; i++){
            sum += nums[i];
        
        if(sum > ans){
            ans = sum;
        }
        if(sum<0) sum =0;
    }
    return ans;
    }
    };
    int main(){
        vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
        Solution sol;
        cout << sol.maxSubArray(nums);
        return 0;
    }