#include <bits/stdc++.h>
using namespace std;
 class Solution{ 
    public :
int dataTypeSize(string str){
    if(str == "char") return sizeof(char);
    else if(str == "int") return sizeof(int);
    return -1;
}
};
int main (){
    Solution sol;
     cout << sol. dataTypeSize("char") << endl; // Output: 1
    cout << sol.dataTypeSize("int") << endl;   // Output: 4
    
    return 0;
};
