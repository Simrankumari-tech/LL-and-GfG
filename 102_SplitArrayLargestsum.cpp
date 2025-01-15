#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int check (vector<int>& nums,int k ,  int maxVal){
    int subArray=1  ,times=0;
    for(int i= 0 ; i < nums.size() ; i++){
        if(times+ nums[i] <= maxVal){
            times+= nums[i];
        }
        else{
            subArray++;
            times = nums[i];
            if(subArray> k) return false;
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k)  {
        // sum of all = accumulate(nums.begin(), nums.end(),0);
        // maximum = *amx_element (nums.begin () , nums.end()) 
        int sum =0 , MaxV =INT_MIN;
        for(int i=0 ; i< nums.size() ; i++){
            sum+= nums[i];
            MaxV = max(MaxV , nums[i] );
        }
        int start = MaxV, end = sum;
        int ans =-1;
        while(start <= end ){
            int mid = start + (end - start)/2;
            if(check(nums ,k , mid)){
                ans = mid; 
                end = mid-1;
            }
            else start = mid +1 ;
        }
        return ans ;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;
    cout << sol.splitArray(nums, k) << endl; // Example usage
    return 0;
}