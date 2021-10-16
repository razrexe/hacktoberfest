class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int fromBegin=1;
        int fromLast=1;
        vector<int> res(n,1);
        
        for(int i=0; i<n; i++)
        {
          res[i]*=fromBegin;
          fromBegin*=nums[i];
          res[n-i-1]*=fromLast;
            fromLast*=nums[n-1-i];
        }
    return res;
    }
};
