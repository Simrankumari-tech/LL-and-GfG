#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int upper_bound(vector<int >&arr  , int x){
        int low = 0, high = arr.size() -1;
        int ans = arr.size();
        while(low <= high ){
            int mid = (low + high)/2 ;
            if(arr[mid] > x ){
                ans = mid;
             high = mid -1;
            }
            else low = mid +1;
        }
        return ans ;

    }
    int countsmallEqual(vector<vector <int >>&mat , int n , int m , int x){
        int count =0 ;
        for(int i = 0 ; i<n ; i++){
            count += upper_bound(mat[i]  , x);
        }
        return count ;
    }
    int median(vector<vector<int >>&mat ){
        int low = INT_MAX , high = INT_MIN;
        int n =  mat.size();
        int m  = mat[0].size();
        for(int i=0; i< n ; i++){
         low = min(low , mat[i][0]);
         high = max ( high , mat[i][m-1]);
    }
    int req = ( n * m +1  )/2;
    while (low <= high ){
        int mid = low + (high - low )/2;
        int smallEqual = countsmallEqual (mat , n , m , mid);
        if(smallEqual < req) low = mid+1;
        else high = mid -1;


    }
    return low;
    }
};
int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    Solution sol;
    cout << "Median: " << sol.median(matrix) << endl;
    return 0;
}