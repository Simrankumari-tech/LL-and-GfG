#include<bits/stdc++.h>
using namespace std;
 class solution{
public :
bool  searchInSorted(vector<int> arr, int k) {
    for(int i =0; i<arr.size() ; i++){
        if(arr[i] == k){
            return true ;
        }
    }
    return false;
}
 };
 int main(){
    vector<int>arr = {1,2,3,4,5,6};
    solution sol;
  cout <<  ( sol.searchInSorted(arr , 6)? "true " : "false");
    return 0;
 }