// lovely esplanation BY codestorywithMIK
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
          return  findMedianSortedArrays(nums2 , nums1 );

        }
        int m = nums1.size();
        int n = nums2.size();
        int l = 0, r= m;
        while(l <= r){
            int px = l + (r- l ) /2; // mid from num 1
            int py = (m + n+1)/2 - px; // from num2 kitne digit left m jaygee

            // left half wale
            int x1 = (px == 0)? INT_MIN : nums1[px-1];
            int x2 = (py == 0)? INT_MIN : nums2[py-1]; 

            //right half wale
            int x3 = (px == m) ?INT_MAX : nums1[px];
            int x4 = (py == n) ? INT_MAX : nums2[py];
             
             if(x1 <= x4 and x2 <= x3){
                if( (m + n)% 2 != 0 ){  // odd hai
                    return max(x1 , x2);
                }
                return (max(x1,x2) + min (x3, x4))/2.0; // even hai
             }
             if(x1>x4){
                r = px -1;
             }
             else l = px+1;
        }
        return -1;
    }
};
int main(){
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    Solution sol;
    cout << sol.findMedianSortedArrays(nums1,nums2);
    return 0;
}