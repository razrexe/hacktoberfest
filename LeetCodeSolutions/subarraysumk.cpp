class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        int count = 0;
        int curr_sum = 0;
        for(int i=0;i<nums.size();i++)
        {
             curr_sum=curr_sum + nums[i];
            
            if(curr_sum == k)
            {
                count++;
            }
            if(ump.find(curr_sum-k)!=ump.end())
            {
                count = count+ump[curr_sum-k];
            }
            ump[curr_sum]++;
        }
        return count;
    }
};
