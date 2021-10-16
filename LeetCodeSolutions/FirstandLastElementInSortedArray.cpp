class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>::iterator low, high;
        low = lower_bound(nums.begin(), nums.end(), target);
        high = upper_bound(nums.begin(), nums.end(), target);
        if (low != nums.end() && *low == target)
            return {(int)(low - nums.begin()), (int)(high - nums.begin() - 1)};
        return {-1, -1};
    }
};
