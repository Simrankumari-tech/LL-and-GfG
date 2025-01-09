#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool helper(vector<int>& nums, int threshold , int mid) {
        int sum =0;
        for(int i=0; i<nums.size() ;i++){
            if(nums[i ] % mid ==0 ) sum += nums[i]/mid;
            else sum += nums[i]/mid +1; // pura divide ni ho ra to plus 1 kr diya
        }

    return sum <= threshold ;
    }
   int smallestDivisor(vector<int>& nums, int threshold){
        int start =1;
        int end = *max_element(nums.begin(), nums.end());
        int ans =0;
        while(start <= end){
            int mid = start + (end - start )/2;
            if(helper(nums, threshold , mid)){
                ans = mid ;
                end = mid -1 ;
            }
            else start = mid +1;
        }
        return ans ;
    }
};
int main(){
    vector<int > nums = {1,2,5,9};
    Solution sol;
    int threshold = 6;
    cout << sol.smallestDivisor(nums , threshold );
    return 0;
}