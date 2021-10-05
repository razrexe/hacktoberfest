vector<int> constructArray(int n, int k) {
    vector<int> ans(n);
    int l = 1, r = k + 1, i = 0;
    while(i < k)   // first k elements will be such there are k unique UAADs
        ans[i++] = l++, ans[i++] = r--;
    if(l == r) ans[i++] = r; // required for case when k is even
    while(i < n) ans[i++] = i + 1; // rest of last elements will be consecutive having adjacent difference of 1
	return ans;
}
