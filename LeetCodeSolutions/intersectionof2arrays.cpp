class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> result;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
            else{
                if(!count(result.begin(),result.end(),nums1[i]))
                    result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
       return result; 
    }
};
