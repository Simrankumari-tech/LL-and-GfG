#include<iostream>
using namespace std;


class Solution {
  public:
    string compareNM(int n, int m){
        // code here
         if(n>m) cout << "greater" ;
        else if(n<m) cout << "lesser" ;
        else cout << "equal" ;
        
    }
};
int main(){

Solution sol;
cout << sol.compareNM(7,7);
}