#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        set<int>st;
        for(int i= 0; i< a.size() ;i++){
            st.insert(a[i]);
        }
        for(int j=0; j< b.size(); j++){
            st.insert(b[j]);


    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
    } 
};
int main(){
    vector<int>a= {2,3,5,7};
    vector <int>b = {1,2,4,7,8};
    Solution sol;
    vector<int > result = sol.findUnion(a,b);
    for(int num : result ){
        cout << num<< " ";
    }
    return 0;
}