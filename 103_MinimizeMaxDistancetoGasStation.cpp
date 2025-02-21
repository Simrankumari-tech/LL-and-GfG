#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
      bool isPossible(vector<int> &stations,double mid,int k){
        int total=0;
        for(int i=1;i<stations.size();i++){
            int dis = stations[i]-stations[i-1];
            total+=ceil(dis/mid)-1;
        }
        return total<=k;
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        double low=0,high=stations[n-1]-stations[0],mid=0,ans=stations[n-1]-stations[0];
        while(high-low>=1e-6){
            mid=(low+high)/2;
            if(isPossible(stations,mid,k)){
                ans=mid;
                high=mid;
            }
            else low=mid;
        }
        return ans;
    
    }

};
int main(){
    vector<int> stations = {1,2,3,4,5,6,7,8,9,10}; 
    int k= 9;
    Solution sol;
    cout <<fixed <<  setprecision(6) <<  sol.findSmallestMaxDist(stations , k);
    return 0;
}