class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int> n(26,0);
        
        for(char c:sentence)n[c-'a']++;
        
        for(int i=0;i<26;i++)
            if(n[i]==0)return false;
        
        return true;
    }
};
