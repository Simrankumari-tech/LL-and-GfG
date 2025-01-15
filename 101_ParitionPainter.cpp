#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    int check(vector<int>&arr , int k , int maxTime){
        int painters = 1, time =0;
        for(int i =0 ; i< arr.size() ; i ++){
            if(time + arr[i] <= maxTime){
                time += arr[i];
            }
            else{ painters++;
            time = arr[i];
            if(painters > k ) return false;
            }
        }
        return true ;
    }
    int minTime(vector<int>&arr , int k){
        int sum =0, maxVal= INT_MIN ;
        for(int i =0 ; i <arr.size() ; i++ ){
            sum += arr[i];
            maxVal = max(maxVal, arr[i]);
        }
        int start = maxVal,end =sum, ans =-1; 
        while(start <= end){
            int mid = start +(end - start )/2;
            if(check(arr , k, mid) ){
                ans = mid;
                end = mid-1;
            }
            else start = mid +1 ;
        }
        return ans ;

    }
};
int main() {
    vector<int> arr = {10, 20, 30, 40};
    int numPainters = 2;
    Solution sol;
    cout << "Minimum Time: " << sol.minTime(arr, numPainters) << endl;
    return 0;
}