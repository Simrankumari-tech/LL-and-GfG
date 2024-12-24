#include<bits/stdc++.h>
using namespace std;
class Solution{
public :
int reverse(int x ){
    int reverse_n = 0;
    while(x != 0){
        int ld = x % 10;
        if (reverse_n > INT_MAX / 10 || (reverse_n == INT_MAX / 10 && ld > 7)) 
    return 0; // Positive overflow
if (reverse_n < INT_MIN / 10 || (reverse_n == INT_MIN / 10 && ld < -8)) 
    return 0; // Negative overflow

         reverse_n = reverse_n * 10 +ld;
         x/= 10;
    }
    return reverse_n;
}
};
int main(){
    Solution sol;
    int x;
    cin >> x;
   cout << sol.reverse(x);
   return 0;
}