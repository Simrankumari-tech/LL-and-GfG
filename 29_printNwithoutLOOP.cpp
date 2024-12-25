#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    void printNos(int n){
     if(n == 0) return ;

     // recusrsive case
     printNos(n);
     cout << n;
    }
};
// class Solution {
//   public:
//     void printGfg(int N) {
//         // Code here
//         if(N == 0) return ;
//         printGfg(N-1);
//         cout << "GFG" << " ";
//     }
// };
int main(){
     int n;
    cin >> n;
    Solution sol;
    sol.printNos(n);
    //sol.printGfg(n);
    return 0;
}