#include<bits/stdc++.h>
string A[11] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void helper(string digits,vector<string>&ans,int index,string current_string)
{
    //base case
    if(index == digits.size())
    {
        ans.push_back(current_string);
         return;
    }
    //i will  be traversing to each char of the curent string
    // and taking one char from each combination for respective digit
    string s = A[digits[index]-'0'];
    for(int i=0;i<s.size();i++)
    {
        helper(digits,ans,index+1,current_string+s[i]);
    }
    return;
     
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        // some base cases
        vector<string>ans;
        if(digits.size() == 0)
        {
             return ans;
        }
        helper(digits,ans,0,"");
        return ans;
        
    }
};
