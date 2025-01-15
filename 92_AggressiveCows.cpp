#include<bits/stdc++.h>
using namespace std;
class Solution {
public :
bool isPossible(vector<int>&arr , int N , int c , int mid){
    int cows =1 , laststallPos = arr[0];
    for(int i = 1; i< N ; i++){
        if(arr[i] - laststallPos >= mid){
            cows++;
            laststallPos= arr[i];
        }
        if( cows == c) return true ;
    }
    return false; 
}
int getDistance(vector<int>&arr , int N , int c){
    sort(arr.begin() , arr.end());
    int result =0;
    int start =1, end =arr[N-1] -arr[0];
    while( start <= end){
        int mid = start + (end - start )/2;
        if(isPossible(arr , N , c , mid)){
            result = mid ;
            start = mid+1;

        }
        else end = mid -1;
    }
    return result ;
}

};
int main(){
    Solution Sol;

    vector<int> arr = {1,2,8,4,9};
    int N =5 , c = 3;
    cout << Sol.getDistance(arr ,N , c);
    return 0;
}