class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int count=0;
        int element=nums[0];
        int size=nums.size();
        for(int i=1;i<size;i++)
        {
            if(element==nums[i])
                count++;
            else
            {
                count--;
                if(count==-1)
                {
                    element=nums[i];
                    count=0;
                }
            }
        }
        int counter=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==element)
                counter++;
        }
        return counter>size/2 ? element : -1;
    }
};
