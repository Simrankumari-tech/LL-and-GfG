#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
     vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> ans;
    int n = arr.size();
    vector<pair <int,int>> numswithindices;

    for(int i=0; i< n;i++){
        numswithindices.push_back({arr[i] , i});
    }
  sort(numswithindices.begin() , numswithindices.end());
  for(int i=0; i<n-2; i++){
    int j= i+1, k=n-1;
    while(j<k){
        int sum = numswithindices[i].first+ numswithindices[j].first+ numswithindices[k].first; 
    
    if( sum <0 ) j++;
    else if(sum>0) k--;
    else{
        vector<int>triplet = {
            numswithindices[i].second,
            numswithindices[j].second,
            numswithindices[k].second
        };
        sort(triplet.begin() , triplet.end());
        ans.push_back(triplet);
        j++;
        k--;
            while (j < k && numswithindices[j].first == numswithindices[j - 1].first) j++;
                    while (j < k && numswithindices[k].first == numswithindices[k + 1].first) k--;
    }
  }
  }
  return ans;
}
};
int main(){
    vector<int> arr= {0, -1, 2, -3, 1};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(arr);
    for(auto&triplet : result){
        for(int data : triplet){
            cout << data << " ";
        }
        cout << endl;
    }
    return 0;
}