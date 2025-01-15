#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int maxWater (vector<int>&arr){
    int lmax = 0 , rmax=0 , total=0, i =0 , j= arr.size()-1;
    while(i <= j){
         lmax = max(lmax , arr[i]);
         rmax = max(rmax , arr[j]);

        if(arr[i] <= arr[j]) {
            total+= lmax - arr[i];
            i++;
        }
        else {
            total += rmax - arr[j];
            j--;
        }

    }
    return total;

    }
};
int main(){
    vector<int>arr = {3,0,1,0,4,0,2};
    Solution sol;
    cout << sol.maxWater(arr);
    return 0;
}