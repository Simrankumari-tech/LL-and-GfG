#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    int countPairs(vector<int>&arr , int target){

    int count =0;
    
        int j= 0, k = arr.size()-1;
        while(j<= k){
            int pairsum = arr[j]+arr[k];
            if(pairsum < target) j++;
            else if(pairsum>target ) k--;
            else {
                int e1 = arr[j] , e2 = arr[k] , cnt1=0, cnt2=0;
                while(j<= k and arr[j]== e1){
                    j++;
                    cnt1++;
                }
                while(j<= k and arr[k] == e2){
                    k--;
                    cnt2++;
                }
                if(e1 == e2 )
                    count += cnt1 *(cnt1 - 1)/2;
                
                else
                    count += cnt1 * cnt2;
                
            
        }
    }
    return count ;
    }
};
int main(){
    Solution sol;
    int target = 6;
    vector<int> arr = {-1,1,5,5,7};
    cout << sol.countPairs(arr , target);
    return 0;
}