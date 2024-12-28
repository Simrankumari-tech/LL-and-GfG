#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int sr,er,sc,ec, row, col;
        int n= matrix.size();
        int m= matrix[0].size();
        sr=sc=0;
        ec=m-1;
        er=n-1;
        //1. print sr from sc to ec
        while(sr<=er and sc<=ec){
    for(int col=sc; col<= ec; col++){
        result.push_back( matrix[sr][col]);
        
    }
    sr++;
        // 2.print ec from  sr to er
        for(int row=sr; row<=er ; row++){
            result.push_back(matrix[row][ec]) ;
            
        }
        ec--;

        //3.print er from ec to sc
        if(er>=sr){
        for(int col=ec; col>=sc;col--){
     result.push_back(matrix[er][col]);
        
    }
    er--;
        }
     // 4. print sc from er to sr
     if(ec>=sc){
     for(int row = er ; row>=sr; row--){
        result.push_back(matrix[row][sc]) ;
     }
     
     sc++;
     }
    }
    return result;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> matrix = {{1,2,3} , {4,5,6} , {7,8,9}};
    vector<int>result = sol.spiralOrder(matrix);
    
        for(const auto& element : result){
            cout << element << " ";
        }

return 0;
}