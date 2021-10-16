    int countSubstrings(string s) {
        int n = s.length();
        int cnt = 0;
        int left = 0, right = 0;
        for (int i = 0; i < n * 2; i++) {
            int l = floor(i / 2.0), r = ceil(i / 2.0);
            while (l >= 0 && r < n && s[l] == s[r]) {
                cnt++;
                l--, r++;
            }
        }
        return cnt;
    }
