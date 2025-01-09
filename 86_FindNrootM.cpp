#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    int nthRoot(int n, int m){
        int start =1, end =m;
        while(start <= end){
            int mid = start + (end-start)/2;
        double num = pow(mid , n);
        if(num == m) return mid;
        else if(num > m) end = mid-1;
        else start = mid +1;
        }
        return -1;
    }
};
int main(){
    int n= 2,m =9;
    Solution sol;
    cout << sol.nthRoot(n,m);
    return 0;
}