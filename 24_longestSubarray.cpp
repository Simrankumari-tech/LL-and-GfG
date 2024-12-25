#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
int lenOfLongestSubarr(vector<int>& arr, int k) {
     unordered_map<int, int> prefixMap; 
 
     int sum =0;
    int len=0;
    for(int i= 0;i <arr.size(); i++){
        
           
            sum += arr[i];
            if(sum ==k){
         len = i+1;
        }
         if (prefixMap.find(sum - k) != prefixMap.end()) {
                len = max(len, i - prefixMap[sum - k]);
            }

            // Store the prefix sum in the map if not already present
            if (prefixMap.find(sum) == prefixMap.end()) {
                prefixMap[sum] = i;
            }
        
        }
        return len;
}
};
int main(){
    vector<int>arr = {10,5,2,7,1,9};
    Solution sol;
    int k =15;
    cout << sol.lenOfLongestSubarr(arr,k);
    return 0;
}
