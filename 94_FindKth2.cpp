#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    int kthElement(vector<int>&a, vector<int>&b , int k){
        int i=0,j=0,ans , c=0,n = a.size() , m = b.size();
        for(int c= 1; c<=k ;c++){
            int x1 = (i < n) ? a[i] : INT_MAX;
            int x2 = (j < m) ? b[j] : INT_MAX;
        

            if(x1< x2){
                i++;
                ans = x1 ;
            }
            else {
                j++;
                ans = x2 ;
            }
        }
            return ans;
        
    }
};
int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;

    Solution obj;
    cout << "The " << k << "th element is: " << obj.kthElement(a, b, k) << endl;

    return 0;
}