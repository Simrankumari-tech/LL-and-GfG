#include<bits/stdc++.h>
using namespace std;
class Solution {
    // glt hai
    
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin() , nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1] ) continue;
            for(int j=i+1;j<n ;j++){
                 if(j>i+1&& nums[j] == nums[j-1] ) continue;
                 
                int k=j+1 , l=n-1;
                while(k<l){
                    long long sum =(long long) nums[i]+nums[j]+nums[k]+nums[l];
                    
                    if(sum == target){
                        ans.push_back({nums[i] , nums[j] , nums[k] , nums[l]});
                        k++; l--;
                        while(k<l && nums[k] == nums[k-1]) k++;
                         while (k < l && nums[l] == nums[l + 1]) l--;
                    }
                    else if(sum<target) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
};
int main(){
    vector<int>nums = {1,0,-1,0,-2,2};
    Solution sol;
    int target=0;
    vector<vector<int>>result= sol.fourSum(nums, target); 
    for(auto&quadruple : result){
        for(int data :quadruple){
            cout << data << " ";
        }
        cout << endl;
    }
    return 0;
}
