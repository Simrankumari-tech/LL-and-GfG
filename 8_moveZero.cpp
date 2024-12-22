#include<bits/stdc++.h>
using namespace std;
class Solution {
public: // glt hai
    void moveZeroes(vector<int>& nums) {
        for(int i= 0,pos = 0; i<nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[pos]);
                pos++;
            }
        }
    }
};
int main(){
    vector<int>nums = {6,9,0,8,0};
    Solution sol;
     sol.moveZeroes(nums);
     for(int data : nums){
        cout << data << " ";
     }
     return 0;
}