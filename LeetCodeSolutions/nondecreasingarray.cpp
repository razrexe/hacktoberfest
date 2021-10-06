class Solution 
{
public:
    bool checkPossibility(vector<int>& nums)
    {
        int count = 0;
         for(int i = 1 ; i<nums.size(); i++)
         {
            if(nums[i]<nums[i-1])
            {
               if(i==1||nums[i-2]<=nums[i])
               { 
                   nums[i-1] = nums[i]; 
                   count++;
               }
            else
            {
                if(nums[i-2]>nums[i])
                {
                    nums[i] = nums[i-1]; 
                    count++;
                }   
               }
            }
            if(count>1)
                return false;
        }
        return true;
    }
};
