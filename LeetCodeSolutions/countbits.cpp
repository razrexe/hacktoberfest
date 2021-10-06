class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n);
        res.push_back(0);
        if(n==0)
            return res;
        
        for(int i=1; i<=n; i++)
        {
          if(i%2==0)
             res[i]=res[i/2];
          else
              res[i]=res[i-1]+1;
      


         }
        return res;
        
    }
};
