class Solution {
public:
    int maxProfit(vector<int>& P, int F) {
        int len = P.size(), buying = 0, selling = -P[0];
        for (int i = 1; i < len; i++) {
            buying = max(buying, selling + P[i] - F);
            selling = max(selling, buying - P[i]);
        }
        return buying;
    }
};
