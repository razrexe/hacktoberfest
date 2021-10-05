class Solution {
public:
    vector<string> wordSubsets(vector<string>& a, vector<string>& b) {
        // support variables
        int freqs[123] = {}, tmp[123] = {}, tot = 0;
        bool isIncluded;
        for (string bit: b) {
            // populating tmp
            for (char c: bit) {
                tmp[c]++;
            }
            // updating bFreqs
            for (char c: bit) {
                freqs[c] = max(freqs[c], tmp[c]);
                tmp[c] = 0;
            }
        }
        // populating chars
        for (int i = 0, lmt = a.size(); i < lmt; i++) {
            string word = a[i];
            isIncluded = true;
            for (int i = 0, lmt = word.size(), c; i < lmt; i++) {
                // updating tmp
                c = word[i];
                if (!freqs[c]) continue;
                tmp[c]++;
            }
            // checking for mismatches
            for (int i = 97; i < 123; i++) {
                if (freqs[i] > tmp[i]) {
                    isIncluded = false;
                }
                // clearing tmp
                tmp[i] = 0;
            }
            if (isIncluded) tot++;
            else a[i] = "*";
        }
        vector<string> res(tot);
        for (int i = a.size() - 1; i > -1 && tot > -1; i--) {
            string word = a[i];
            if (word == "*") continue;
            else res[--tot] = word;
        }
        return res;
    }
};
