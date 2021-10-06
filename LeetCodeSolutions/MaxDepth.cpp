class Solution {
public:
    int maxDepth(string s) {
        int a = s.length();
        int result = 0;
        int max = 0;
        for(int i = 0;i < a;i++)
        {
            if(s[i] == '(')
                result += 1;
            
            else if(s[i] == ')')
                result -= 1;
            
            if(result > max)
                max = result;
            
        }
        return max;
    }
};
