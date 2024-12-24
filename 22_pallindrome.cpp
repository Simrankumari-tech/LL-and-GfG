#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    bool islapindrome(int x){
        if (x < 0) return false;
        int original = x;
int reverse_n = 0;
while(x>0){
int ld = x % 10;
  if (reverse_n > (INT_MAX / 10)) return false; 
reverse_n = reverse_n * 10 +ld;
x/= 10;
}
return original == reverse_n;
    }
};
int main(){
    Solution sol;
    int x;
    cin >> x;
  if(sol.islapindrome(x)) cout <<  true ;
  else cout <<  false ;
    return 0;
}