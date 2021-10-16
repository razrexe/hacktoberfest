int flag;
class Solution 
{
public:
    bool squareIsWhite(string s)
    {
        

      if (s[0] == 'a' || s[0] == 'c' || s[0] == 'e' || s[0] == 'g')
	{
		if (s[1] == '1' || s[1] == '3' || s[1] == '5' || s[1] == '7')
			return false;
		else
            return true;
 
   }
	else
	{
		if (s[1] == '1' || s[1] == '3' || s[1] == '5' || s[1] == '7')
			return true;
		else
			return false;
	}


        
    }

};
