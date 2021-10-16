class Solution {
public:
    string breakPalindrome(string palindrome)
    {
        int l=palindrome.size();
        if(l==1)    return "";
        
        for(int i=0;i<l/2;i++)
        {  
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';  
                return palindrome;
            }
        }
        palindrome[l-1]='b';  
        return palindrome;
        
    }
};
