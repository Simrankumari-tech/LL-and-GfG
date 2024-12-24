#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int dataTypeSize(string str) {
        if (str == "char") {
            return sizeof(char);
        } else if (str == "int") {
            return sizeof(int);
        } else if (str == "long") {
            return sizeof(long);
        } else if (str == "float") {
            return sizeof(float);
        } else if (str == "double") {
            return sizeof(double);
        } else {
            return -1;
        }
    }
};

int main() {
    Solution sol;
    cout << "Size of char: " << sol.dataTypeSize("char") << endl; // Output: 1
    cout << "Size of int: " << sol.dataTypeSize("int") << endl;   // Output: 4
    cout << "Size of long: " << sol.dataTypeSize("long") << endl; // Output: 8
    cout << "Invalid type: " << sol.dataTypeSize("string") << endl; // Output: -1
    return 0;
}
