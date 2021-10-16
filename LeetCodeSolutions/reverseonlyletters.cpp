  class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char>letters;
        for (char c: s)
            if (isalpha(c))  letters.push(c);

        string ans;
        for (char c: s) {
            if (isalpha(c)){
                ans+=(letters.top());
                letters.pop();
            }else
                ans+=c;
        }
        return ans;
    }
};
