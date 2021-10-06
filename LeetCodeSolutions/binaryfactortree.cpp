static constexpr int resMod = 1000000007;

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
         int len = arr.size();
        long dp[len], res = 0;
        unordered_map<int, int> available;
         sort(begin(arr), end(arr));
         for (int i = 0, n, quotient, lmt; i < len; i++) {
             n = arr[i], lmt = n / 2;
             dp[i] = 1;
             for (int dn: arr) {
                 if (dn > lmt) break;
                if (n % dn == 0) {
                    quotient = n / dn;
                     if (available.find(quotient) != end(available)) {
                        dp[i] += dp[available[dn]] * dp[available[quotient]];
                    }
                }
            }
             dp[i] %= resMod;
             available[n] = i;
            res = (res + dp[i]) % resMod;
        }
        return res;
    }
};
