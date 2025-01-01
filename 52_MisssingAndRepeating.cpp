#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    vector<int>findTwoElement(vector<int>&arr){
        for(int i=0; i<arr.size() ;i++){
            if(arr[i] == arr[i+1]) 
            {
                return arr;
            }
        }
    }
   
};
int main(){
    vector<int>arr ={1,3,3};
    Solution sol;
    sol.findTwoElement(arr);
    return 0;
}