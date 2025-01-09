#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low =0 , high = arr.size() -1;
        
        while(low <= high ){
             int mid = low + (high - low) / 2;
            int missing = arr[mid]-(mid +1);
            if(missing <k) low = mid+1;
            else high = mid -1;
        }
        return low +k;
    }
};
int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    Solution sol;
    cout << "Kth Missing Number: " << sol.findKthPositive(arr, k) << endl;
    return 0;
}