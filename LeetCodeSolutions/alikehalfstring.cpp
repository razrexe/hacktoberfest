class Solution {
public:
    bool halvesAreAlike(string s) {
        int l = 0, r = 0;
        
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {
            l += isVowel(tolower(s[i]));
            r += isVowel(tolower(s[j]));
        }
        
        return l == r;
    }

    bool isVowel(char s) {
        return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
    }
};
