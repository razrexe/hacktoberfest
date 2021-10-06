class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int operations=0;
        for(int i=1; i<(int)nums.size();i++)
        {
              if(nums[i]<=nums[i-1])
              { 
                 int raise=nums[i-1]+1-nums[i];
                  nums[i]=nums[i-1]+1;
                  operations+=raise;
               

                  }

           }
        return operations;
    }
};
