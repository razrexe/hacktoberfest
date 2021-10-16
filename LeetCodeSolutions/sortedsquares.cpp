    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        
        vector <int> res(n);
        int pos = n-1;
        
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        
        return res;
    }
