class Solution {
public:
    int binaryGap(int n)
{
	int out=0;
	for(auto i=0, j=32; n; n>>=1, ++i)
		if(n&1) out=max(out, i-j), j=i;
	return out;
}

};
