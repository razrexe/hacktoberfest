// Program to find if the given string of bracket pairs are valid or not

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

isBalanced(string s) {
	stack<char> st;
	for(auto bracket: s) {
		if(symbols[bracket] < 0) {
			st.push(bracket);
		} else {
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(symbols[top] + symbols[bracket] != 0) return "NO"; 
		}
	}
	if(st.empty()) return "YES";
	return "NO";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << isBalanced(s) << endl;
	}
}
