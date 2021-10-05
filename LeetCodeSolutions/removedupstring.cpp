string removeDuplicates(string s, int k) {
	stack<pair<char, int> >stk; // It will store a character and its consecutive count
	stk.push({'#', 0}); // just to reduce extra condition checks.
	for(int i = 0; i < size(s); i++){
		// if current character is equal to previous character, store it with incremented consecutive count
		stk.push({s[i], stk.top().first == s[i] ? stk.top().second + 1  : 1});
		// if consecutive count equals k, then delete that group of k characters.
		if(stk.top().second == k) {
			while(stk.top().first == s[i]) stk.pop();
			s.erase(i - k + 1, k);                
			i -= k;
		}                
	}
	return s;
}
