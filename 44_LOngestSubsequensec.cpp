#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest  =0;
        unordered_set<int>numset(nums.begin() , nums.end());
    for(int num : nums){
        if(!numset.count(num-1)){
            int currentnum = num;
            int streak=1;
        
        while(numset.count(currentnum+1)){
            currentnum++;
            streak++;
        }
        longest = max(longest , streak);
        }
    }
    return longest;
    }
};
int main(){
    vector<int> nums ={100,4,200,1,3,2};
    Solution sol;
    cout << sol.longestConsecutive(nums);
    return 0;
}