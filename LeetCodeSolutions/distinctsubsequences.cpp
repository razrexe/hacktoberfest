class Solution {
public:
    int numDistinct(string s, string t) 
    {
        int n = s.size(), m = t.size();
        vector<unsigned int> olds(n+1,0);
        for(int i = 1;i <= m; i++)
        {
            vector<unsigned int> news(n+1,0);
            for(int j = 1;j <= n; j++){
                if(s[j-1]==t[i-1])
                {
                    if(i>1)
                        news[j] = olds[j-1]+news[j-1];
                    else
                        news[j]=1+news[j-1];
                }else
                    news[j]=news[j-1];
                
            }
            olds=news;
        }
        return olds[n];
    }
};
