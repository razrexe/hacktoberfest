class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
	int n = size(tokens) - 1;
	return solve(tokens, n);
    }
int solve(vector<string>& t, int &i) {
	if(t[i] == "+" || t[i] == "-" || t[i] == "*" || t[i] == "/") {
		char Operator = t[i][0];
		int op1 = solve(t, --i), op2 = solve(t, --i);            
		if(Operator == '+') return op2 + op1;
		if(Operator == '-') return op2 - op1;
		if(Operator == '/') return op2 / op1;
		if(Operator == '*') return op2 * op1;
	}
	return stoi(t[i]);        
}

};
