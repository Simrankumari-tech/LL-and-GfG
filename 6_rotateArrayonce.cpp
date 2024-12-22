#include<bits/stdc++.h>
using namespace std;
class solution{
    public :
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
     int temp = arr[0];
        for(int i= 1; i<n; i++){
            
            arr[i-1] = arr[i];
        }
            arr[n-1] = temp;
        
        return arr;
    }
};


int main(){
    vector<int>arr = {4,6,7,8,6};
    solution sol;
    sol.rotateArray(arr , 5);
      for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}