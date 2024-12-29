#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans =nums[0];
        int mx=ans;
        int mn =ans;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(mx,mn);
            }
            mx = max(nums[i] , mx *nums[i]);
            mn = min(nums[i] , nums[i]* mn);
            ans = max(mx,ans);
        }
        return ans;
    }
};
int main(){
    vector<int> nums={2,3,-2,4};
    Solution sol;
    cout << sol.maxProduct(nums);
    return 0;
}