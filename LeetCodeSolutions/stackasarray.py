class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        
        int i=1,j=0;// i for numbers and j for size of target array
        
        while(i<=n) 
        {
            if(j == target.size())
                break;
            if(i==target[j])
            {
                res.push_back("Push");
                i++;j++;
            }
            else
            {
                res.push_back("Push");
                res.push_back("Pop");
                i++;
            }
            
        }
        return res;
    }
};
