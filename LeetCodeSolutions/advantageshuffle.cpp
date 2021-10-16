class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> res;
        sort(A.begin(), A.end());
        for (int i = 0; i < B.size(); i++) {
            auto it = A.back() > B[i] ? upper_bound(A.begin(), A.end(), B[i]) : A.begin();
            res.push_back(*it);
            A.erase(it);
        }
        return res;
    }
};
