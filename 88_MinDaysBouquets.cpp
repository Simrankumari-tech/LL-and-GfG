#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int canmake(vector<int>&bloomDay , int m , int k){
    int bouquecnt =0;
    int consecutive =0;
    for(int i=0; i<= bloomDay.size()-1 ; i++){
        if(bloomDay[i] <= m){
            consecutive++;

        }
        else consecutive =0;
        if(consecutive == k){
            bouquecnt++;
            consecutive =0;
        }
    }
    return bouquecnt;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = *min_element(bloomDay.begin(), bloomDay.end()); // Start from min bloomDay
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;
        while(start <= end){
            int mid = start +(end - start)/2;
            if(canmake(bloomDay , mid , k) >=m){
                result = mid;
                end = mid-1;
            }
            else start = mid+1;
        }
        return result;
    }
};
int main(){
    vector<int> bloomDay = {1,10,3,10,2};
    int m=3, k=1;
    Solution sol;
    cout << sol.minDays(bloomDay , m , k);
    return 0;
}