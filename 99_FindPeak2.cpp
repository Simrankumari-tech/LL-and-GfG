#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int maxRowIndex (vector<vector<int>>& mat ,int n , int col){
            int index =-1 , maxeval =-1;
            for(int i=0; i< n ; i++){
                if(mat[i][col] > maxeval ) {
                    maxeval= mat[i][col];
                    index = i;
                }

            }
            return index ;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n= mat.size();
        int m = mat[0].size();
        int start =0 , end = m -1;
        while(start <= end ){
            int mid = start +(end - start )/ 2;
        int maxRow = maxRowIndex(mat , n , mid  );
    int left = (mid-1 >=0) ? mat[maxRow][mid-1] : -1;
    int right = (mid+1 < m)  ? mat[maxRow][mid+1] : -1;

    if(mat[maxRow][mid] > left and mat[maxRow][mid] > right ){
        return {maxRow , mid } ; 
    }
    else if (mat[maxRow][mid] <left) end= mid - 1;
    else start = mid +1 ;
        }
        return {-1,-1};
    }
};
int main(){
    Solution sol;
    vector<vector<int>> mat = {
        {1,4} ,
         {3,2}
         };
         vector<int > result = sol.findPeakGrid(mat);
         for(int data : result ){
            cout << data <<  " ";
         }
         return 0;

}