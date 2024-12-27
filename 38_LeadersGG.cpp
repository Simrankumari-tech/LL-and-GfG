


#include<bits/stdc++.h>
using namespace std;

vector<int> printLeaders(vector<int>&arr) {

     // Code here
        int n= arr.size();
        vector<int> ans;
        int maxi = arr[n-1];
        ans.push_back(maxi);
        
        for(int i=n-2;i>=0;i--) {
            if(arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
}

int main() {
    
  // Array Initialization.
  
  vector<int>arr = {10,4,2,4,1};

  vector<int> ans = printLeaders(arr);
  
  
  for(int i =0; i< ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}

