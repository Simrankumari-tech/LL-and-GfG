#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
 vector<int> frequencyCount(vector<int>& arr) {
        int N =arr.size();
        // code here
        vector<int>result(N,0);
        unordered_map<int , int>m;
        for(int i=0; i<arr.size() ; i++){
            if(arr[i]>0 and arr[i] <=N){
            m[arr[i]]++;
            }
        }
        for(int i=0; i<=N ; i++){
            result[i-1] = m[i];
        }
        return result;
    }
};
int main(){
    Solution sol;
    vector<int>arr = {2,1,4};
    vector<int>result = sol.frequencyCount(arr);
    for(int num : result){
cout << num << " ";
    }
    return 0;
}