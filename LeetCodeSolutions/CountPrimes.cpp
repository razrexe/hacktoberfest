class Solution {
public:
int countPrimes(int n) {
       
        if(n<2) return 0;
        
        vector<int> a(n,0);
        int count = 0;
        
        for(int i = 2; i<n; ++i){
            if(a[i] == 0){
                count++;
                for(int j = 1; j*i<n; ++j){
                    a[i*j] = 1;
                }
            }
        }
        return count;
    }

};
