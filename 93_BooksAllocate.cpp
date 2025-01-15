
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
     bool isvalid(vector<int>& arr , int k , int mid){
        int student=1, pages = 0;
    
        for(int i=0;i< arr.size() ; i++){
            if( arr[i] > mid) return false ;
            if(pages + arr[i] <= mid){
                pages += arr[i];
            }
            else {
                student++ ;
                pages = arr[i];
            }
        }
        return student > k ? false : true;

    }
    int findPages(vector<int>& arr , int k){
        if( k > arr.size()) return -1;
        int start =0, sum=0;
        for(int i=0 ; i<arr.size() ; i++){
            sum += arr[i];
        }
        int end = sum , res =-1;
        while(start <= end){
            int mid = start +(end- start)/2;
            if(isvalid(arr , k , mid)){
                res = mid;
                end = mid -1;
            }
            else start = mid+1;
        }
        return res; 
    }
};

//{ Driver Code Starts.

int main() {
Solution sol;
vector<int>arr = {12, 34, 67, 90};
int k = 2;
cout << sol.findPages(arr , k );
return 0;
}
// } Driver Code Ends