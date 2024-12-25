#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size() ;i++){
            for(int j =i+1; j<nums.size() ; j++){
                if(nums[i]+nums[j] == target){
                  return{i,j};
                }
            }
        }
        return {};
    }
};
int main(){
    vector<int> nums= {1,2,3,4,5,6,7};
    Solution sol;
    int target = 3;
    vector<int> result =sol.twoSum(nums , 3);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    
    return 0;
}