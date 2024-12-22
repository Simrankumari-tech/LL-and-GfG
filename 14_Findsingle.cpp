#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr= 0;
        for(int i=0; i<nums.size(); i++){
           xorr ^= nums[i];
        }
        return xorr;

    }
};
int main(){
vector <int >nums = {1,1,2,2,3,4,4};
Solution sol;
cout << sol.singleNumber(nums);
return 0;
}