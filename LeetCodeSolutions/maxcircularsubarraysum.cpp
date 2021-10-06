class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=0; 
      int temp=INT_MIN;
        
       for(int i=0;i<nums.size();i++)
       {
            sum+=nums[i];
           if(temp < sum)
               temp=sum;
           
           if(sum < 0)
               sum=0;
           
       } 
        
        return temp;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int normalmax = maxSubArray(A);
        if(normalmax < 0)
            return normalmax;
        int sum = 0;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            A[i] *=-1;
        }
        int circularmax = sum + maxSubArray(A);
        return max(normalmax,circularmax);
    }
};
