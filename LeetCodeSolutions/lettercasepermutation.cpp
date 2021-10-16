class Solution {
public:
    void solve(string s, vector<string>&ans, int i)
    {
        if(i==s.size())
        {
            ans.push_back(s);
            return;
        }
        if(isalpha(s[i]))
        {
            s[i]=toupper(s[i]);
            solve(s,ans,i+1);
            s[i]=tolower(s[i]);
            solve(s,ans,i+1);
        }
        else
            solve(s,ans,i+1);
    }
    
    vector<string> letterCasePermutation(string s) { 
        vector<string> ans;
        solve(s,ans,0);
        return ans;
        
        
    }
};
