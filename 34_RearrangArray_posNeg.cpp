#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive , negative,result ;
        for(int num : nums){
            if(num>0) positive.push_back(num);
            else negative.push_back(num);
        }
            for(int i=0; i<positive.size() ; i++){
                
                result.push_back(positive[i]);
                result.push_back(negative[i]);
                      

        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}