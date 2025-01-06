#include<bits/stdc++.h>
using namespace std;
class Solution {
    public : 
    int countFreq(vector<int>&arr , int target){
        unordered_map<int , int>mp;
        for(auto x : arr){
            mp[x]++;
        }
       return mp[target];
    }
};
int main(){
    vector<int>arr = {1,1,2,2,2,2,3};
    int target =2;
    Solution sol;
    cout << sol.countFreq(arr , target);
    return 0;
}