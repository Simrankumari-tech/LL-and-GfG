#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int rowWithMax1s (vector<vector<int>> &arr){
        int n = arr.size();
        int m = arr[0].size();
        int resultRow=-1, j = m-1;
       for(int i=0 ; i< n ;i ++){


        while(j>= 0 and arr[i][j] == 1){
            resultRow = i;
            j--;
        }
       }
       return resultRow;

    }

};
int main() {
    Solution sol;
    vector<vector<int>> arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    
    cout << sol.rowWithMax1s(arr) << endl; // Output: 2
    return 0;
}