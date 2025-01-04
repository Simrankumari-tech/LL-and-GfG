#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr, int target) {
        int count = 0;
        int n = arr.size();
        for (int i = 0; i < n-2; i++) {

            int j = i + 1, k = n - 1;
            while (j < k) {
                long long sum = (long long)arr[i] + arr[j] + arr[k];
                if (sum < target) {
                
                    j++;

                } else if(sum> target) {
                    k--;
                }
                else{
                    int e1 = arr[j],e2 = arr[k] ,c1 =0, c2=0;
                    while(j<= k  and arr[j] == e1){
                        c1++;
                        j++;
                    }
                    while(j<= k and arr[k] == e2){
                        c2++;
                        k--;
                    }
                    if(e1 == e2){
                        count += (c1 *(c1-1))/2;
                    }
                    else{
                        count += c1 *c2;                 
                           }
                }
            }
        }
        return count;
    }
};

int main() {
    vector<int> arr = {-3, -1, -1, 0, 1, 2};
    int target = -2;
    Solution sol;
    cout << sol.countTriplets(arr, target) << endl; // Expected output: 4
    return 0;
}
