class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
	unordered_map<char, int> mpOrder;
	for (int i = 0; i < order.size(); i++)
		mpOrder[order[i]] = i;

	vector<int> curWord{}, prevWord{};
	for (int i = 0; i < words.size(); i++) {
		curWord.clear();
		for (int j = 0; j < words[i].size(); j++) {
			curWord.push_back(mpOrder[words[i][j]]);
		}
		if (curWord < prevWord)
			return false;
		prevWord = curWord;
	}
	return true;
}

};
