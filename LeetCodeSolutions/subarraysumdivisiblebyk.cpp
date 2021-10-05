class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {

        int pref = 0;  
        vector<int> cPref(K); 
        cPref[0]=1;  
        
        int answer = 0;  
        for(int i = 0; i < A.size(); i++) {
            
            pref = (pref + A[i]) % K;  
            
            if(pref < 0) pref += K;  
                        
            answer += cPref[pref];  
            
            cPref[pref]++;  
        }
        
        return answer;}
    };

