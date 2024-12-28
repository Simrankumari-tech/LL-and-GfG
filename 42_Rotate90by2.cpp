#include<bits/stdc++.h> 
using namespace std;
class Solution {
    public :
    void rotateby90(vector<vector<int>>&mat){
        int n= mat.size();
        int m= mat[0].size();
        for(int i=0; i<n;i++){
            for(int j=i+1; j<m;j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
    for(int j=0;j<n;j++){
        int start =0, end=n-1;
        while(start< end){
        swap(mat[start][j] , mat[end][j]);
        start++;
        end--;
        }
    }

    }
};
int main(){
    vector<vector<int>>mat={{1,2,3} , {4,5,6},{7,8,9}};
Solution sol;
sol.rotateby90(mat);
  for (const auto& row : mat) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout<< endl;
  }
return 0;

}
