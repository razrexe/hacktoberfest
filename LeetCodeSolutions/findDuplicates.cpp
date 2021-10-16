class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        if(nums.empty())return {};
        for(int i=0; i<nums.size(); i++)
        {
            int idx=abs(nums[i])-1;
            if(nums[idx]>0)
            nums[idx] =(-nums[idx]);
            else
                v.push_back(abs(nums[i]));
        }
        return v;
    }
};
