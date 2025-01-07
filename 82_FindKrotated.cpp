#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int Findk(vector<int>& arr){
        int start =0, end = arr.size()-1;
        while(start<= end){
            int mid = start +(end - start)/2;
            if(arr[start] < arr[end]) return start;
            if(arr[mid] >= arr[end]) start = mid+1;
            else end = mid;
        }
        return end;
    }
};
int main(){
    vector<int>arr = {5,1,2,3,4};
    Solution sol;
    cout << sol.Findk(arr);
    return 0;
}