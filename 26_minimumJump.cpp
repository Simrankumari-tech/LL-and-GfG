#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int jump= 0;
        int pos = 0;
        int des= 0;
        for(int i=0; i<arr.size()-1 ; i++){
            des = max(des , arr[i]+i);
            if(pos == i){
                pos = des;
                jump++;
            }
            if (pos >= arr.size() - 1) break;
        }
         return (pos < arr.size() - 1) ? -1 : jump;
    }
};
int main(){
    vector <int> arr = { 1,2,3,4};
    Solution sol;
   cout <<  sol.minJumps(arr);
return 0;

}

