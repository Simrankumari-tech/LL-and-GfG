#include<iostream>
using namespace std;
void printREverse(int n){
    int multiplier = 10;
    while (multiplier>=1){
        cout << n * multiplier << " ";
        multiplier--;
    }
}
int main(){
    int n;
    cin >> n;
    printREverse(n);
    return 0;
}