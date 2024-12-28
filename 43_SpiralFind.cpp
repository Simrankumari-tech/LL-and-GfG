#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findK(vector<vector<int>>& a,int n,int m,int k) {
        vector<int>result;
        int sr,er,sc,ec;
        
        sr=sc=0;
        ec=m-1;
        er=n-1;
        //1. print sr from sc to ec
        while(sr<=er and sc<=ec){
    for(int col=sc; col<= ec; col++){
        result.push_back( a[sr][col]);
        
    }
    sr++;
        // 2.print ec from  sr to er
        for(int row=sr; row<=er ; row++){
            result.push_back(a[row][ec]) ;
            
        }
        ec--;

        //3.print er from ec to sc
        if(sr<=er){
        for(int col=ec; col>=sc;col--){
     result.push_back(a[er][col]);
        
    }
    er--;
        }
     // 4. print sc from er to sr
     if(sc<=ec){
     for(int row = er ; row>=sr; row--){
        result.push_back(a[row][sc]) ;
     }
     
     sc++;
     }
    }
    if(k>0 and k<=result.size()){
    return result[k-1];
    
    }
    else {
        return -1;
    }
    }
};
int main(){
    Solution sol;
    int n=3,m=3,k=4;
    vector<vector<int>> a = {
        {1,2,3},
     {4,5,6} ,
          {7,8,9}
          };
    int result = sol.findK(a,n,m,k);
    cout << result;

return 0;
}