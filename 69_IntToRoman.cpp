#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    string convertToRoman(int n){
    vector<int > val = {1000 ,900, 500,400,100,90,50,40,10,9,5,4,1};
    vector< string> sym = {"M" ,"CM" , "D" , "CD" , "C" ,"XC" ,"L" , "XL" , "X" , "IX" , "V" , "IV" , "I"}; 
    string result ="";
     for (int i = 0; i < val.size(); i++) {
            while (n >= val[i]) { // Check if the current Roman numeral fits
                result += sym[i];
                n -= val[i]; // Subtract the value
            }
   
 
    }
      return result;
    }
};
int main(){
    int n= 3749;
    Solution sol;
    cout << sol.convertToRoman(n);
    return 0;
}