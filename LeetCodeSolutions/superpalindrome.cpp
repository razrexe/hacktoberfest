class Solution {
public:
  int answer;
  long long low, high;
  
  bool isPolin(string s){
    long long n = stoll(s);
    n *= n;
    if(n < low || n > high) return false;
    
    s = to_string(n);
    int l = 0, r = s.size() - 1;
        
    while(l < r)
      if(s[l++] != s[r--]) return false;
            
    return true;
  }
 
  void helper(int l, int r, string &s){
    if(l > r) return;
    
    for(int i = 0; i != 9; i++){
      if(l == 0 && i == 0) continue;
        s[r] = s[l] = '0' + i;
        if(r - l < 2 && isPolin(s)) answer++;
        helper(l + 1, r - 1, s);
        s[r] = s[l] = '0';
      }
    }

  int superpalindromesInRange(string L, string R) {
    answer = 0, low = stoll(L), high = stoll(R);
    string s;
    
    int limit = (R.size() + 1)>>1;
      for(int length = L.size()>>1; length <= limit; length++){
        s.resize(length,'0');
        helper(0, length - 1, s);
      }
    
    return answer;
  }
};
