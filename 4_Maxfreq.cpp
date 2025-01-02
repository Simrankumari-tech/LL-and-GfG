#include <bits/stdc++.h>
using namespace std;
char maxfreq(string s){
	int max = INT_MIN;
	char maxchar ;
	unordered_map<char, int> mp;
	for(int i=0; i<s.size() ;i++){
	
		mp[s[i]]++;
	}
	for(auto&x : mp){
	if(x.second  > max){
		max = x.second ;
		maxchar= x.first;
	}
	}
	return maxchar;
}
int main() {
	string s = "aabba";
	cout << maxfreq(s) ;
	return 0;
}