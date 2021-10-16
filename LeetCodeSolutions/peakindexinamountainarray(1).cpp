class Solution {
public:
  int peakIndexInMountainArray(vector<int>& arr) 
  {
        int left = 0;
        while (arr[left] < arr[left+1]) left++;
        return left;
    }

};
