class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long shift=0;
        for(int i=s.size()-1;i>=0;i--){
            s[i]=((s[i]-'a')+(shift+shifts[i]) % 26) % 26 +'a';
            shift+=shifts[i];
        }
        return s;
    }
};
