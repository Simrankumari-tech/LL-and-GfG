#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool cameatall(vector<int>&piles ,int mid ,int h){
            int actualHOurs =0;
            for(int &x : piles){
                actualHOurs += x/mid;
                if( x % mid !=0) actualHOurs++;
            }
           return actualHOurs<= h;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l=1;
        int r = *max_element(begin(piles) , end(piles));
        while(l<r){
            int mid = l + (r - l)/2;
    if(cameatall(piles , mid , h)) r = mid ;
    else l = mid+1;
        }
        return l;      
    }
};
int main(){
    vector<int>piles = {3,6,7,11};
    int h=8;
     Solution sol;
     cout << sol.minEatingSpeed(piles , h);
     return 0;
}