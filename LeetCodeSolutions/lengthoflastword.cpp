class Solution {
public:
    int lengthOfLastWord(string s) {
        int A = 0;
        for (int i=s.size()-1; i>=0; --i) {
            if (s[i] != ' ') ++A;
            else if (A) return A;
        }
        return A;
    }
};
