#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n= a.size();
        int m= b.size();
        for(int i=n-1,j=0; i>=0 &&j<m; i--,j++){
            if(a[i] > b[j]){
                swap(a[i] , b[j]);
            }
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
}
};
int main(){
    vector<int>a ={2,4,7,10};
    vector<int>b ={2,3};
    Solution sol;
    sol.mergeArrays(a,b);
    for(int data : a){
        cout << data << " ";
    }
    cout << endl;
    for(int data : b){
        cout << data << " ";
    }
    cout << endl;
    return 0;

}