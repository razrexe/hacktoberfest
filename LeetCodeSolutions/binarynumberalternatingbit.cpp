class Solution {
public:
   bool hasAlternatingBits(int n) {
	bool bPrev = n & 1;
	n >>= 1;
	while (n) {
		bool bCur = n & 1;
		if (bCur == bPrev)
			return false;
		bPrev = bCur;
		n >>=1;
	}
	return true;
}

};
