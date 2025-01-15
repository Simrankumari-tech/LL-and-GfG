#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int j = m-1 , i= 0;
        
            while(j>= 0 and i< n ){
                if(matrix[i][j] == target) return true;
                else if(matrix[i][j] > target) {
                            j--;
                }
                else i++;
            }
            return false ;
        
    }
};
int main() {
    Solution sol;
    vector<vector<int>> arr = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}

        
    };
    int target = 52;
    
     cout << (sol.searchMatrix(arr , target) ? true : false) ; 
    return 0;
}
