class Solution {
public:
    int myAtoi(string s) {
        
        int i=0;
        long num = 0;
        
         while( s[i] == ' ')
            i++;
        
         int sign = 1;
        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }
        
         while( s[i] >= '0' && s[i] <= '9'){
            
            num = num*10+(s[i++]-'0')*sign;
            
            if(num < INT_MIN)
                return INT_MIN;
            if(num > INT_MAX)
                return INT_MAX;
        }
             
        return num;
    }
};
