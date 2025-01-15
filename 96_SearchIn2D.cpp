#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m = matrix[0].size();
        int j=m-1;
        for(int i=0; i<n ;i ++){
            
            while(j >= 0 and matrix[i][j] > target){
                
             j--;
            }
             while(j >= 0 and matrix[i][j] == target){
                
             return true;
            }

        }
        return false ;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> arr = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        
    };
    int target = 52;
    
    cout << sol.searchMatrix(arr , target) << endl; 
    return 0;
}