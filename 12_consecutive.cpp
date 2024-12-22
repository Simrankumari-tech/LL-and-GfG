#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1) {
                count++;
                  max_count = max(count, max_count);
            }
            else count = 0;
        }
       
    
    return max_count ;
    }
};
int main(){
vector<int> nums = {1,1,0,1,1,0,1,1,1,1};
Solution sol;
int result = sol.findMaxConsecutiveOnes(nums);
cout << result;
return 0;
}