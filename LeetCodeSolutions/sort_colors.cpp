class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int colors[3] = {0, 0, 0};
        for (int n: nums)  colors[n]++; 
        for (int i = 0, j = 0; i < 3; i++)
			while (colors[i]--)
            nums[j++] = i;
            
    }
};
