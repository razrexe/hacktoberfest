class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        if(s.size()==0)return ans;
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            reverse(temp.begin(),temp.end());
            ans=ans+" "+temp;
        }
        return ans.substr(1,ans.size()-1);    
    }
};
