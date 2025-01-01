#include<bits/stdc++.h>
using namespace std;
class Solution {
    public : 
    vector<int>findDuplicates(vector<int>&arr){
        unordered_map<int,int>frequency;
        vector<int>result;
        for(int nums : arr){
            frequency[nums]++;
        }
        for(const auto& x : frequency){
            if(x.second >1) result.push_back(x.first);
            
        }
        return result;
    }
};
int main(){
       Solution sol;
    vector<int>arr = {2,3,1,2,3};
    vector<int>ans = sol.findDuplicates(arr);
    if(!ans.empty()){
        for(int num : ans){
            cout << num << " ";
                    }
    }
    else{
        cout << "[]";
    }
    return 0;
    
}