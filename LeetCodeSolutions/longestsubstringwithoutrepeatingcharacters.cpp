class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
      int store[256]={0};
        int l=0;
        int r=0;
        int ans=0;
        while(r<s.length())
        {
               store[s[r]]++;
            while(store[s[r]]>1)
            {

               store[s[l]]--;
                l++;
             }
            ans=max(ans,r-l+1);
            r++;
        
           }
        return ans;
    }

};
