#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1; j<m;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i=0; i<n;i++){
           reverse(matrix[i].begin() , matrix[i].end());
        }

    }
};
int main(){
    vector<vector<int>>matrix ={{1,2,3} , {4,5,6},{7,8,9}};
Solution sol;
sol.rotate(matrix);
  for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout<< endl;
  }
return 0;

}
