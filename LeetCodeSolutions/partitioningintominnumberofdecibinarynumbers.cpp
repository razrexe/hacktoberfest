class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(auto i:n)
            maxi=max(maxi,int(i-'0'));
        return maxi;
        
    }
};
