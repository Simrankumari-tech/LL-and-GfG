#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m = matrix[0].size();
        vector<int>x,y;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        // row->0
        for(int i=0; i <x.size() ; i++){
            int rowindex = x[i];
            for(int j=0; j<m ;j++){
                matrix[rowindex][j]=0;
            }
        }
        for(int i=0;i<y.size() ; i++){
            int colindex = y[i];
            for(int j=0; j<n;j++ ){
                matrix[j][colindex] =0;
                }
        }
    }
};
int main(){
    vector<vector<int>> matrix= {{1,1,1}, {1,0,1}, {1,1,1} };
Solution sol;
sol.setZeroes(matrix);
  for (const auto& x : matrix) {
        for (const auto& elem : x) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}