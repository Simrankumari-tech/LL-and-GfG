#include<iostream>
using namespace std;
class Solution{
    public :
int evenlyDivides(int n){
    int count = 0;
    int original = n;
    while(n>0){
    
int lastdigit = n % 10;

if(lastdigit!= 0 && original % lastdigit== 0 )count ++;

n/=10;
}
return count;
}
};
int main(){
    Solution sol;
    int n;
    cin >> n;
    cout << sol.evenlyDivides(n);
    return 0;
}