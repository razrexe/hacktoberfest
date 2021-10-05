class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        for (int i = 0; i < A.size(); i++)
            if (i - A[i] > 1 || i - A[i] < -1) return false;
        return true;
    }
};
