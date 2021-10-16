class Solution {
public:
    int findComplement(int num) {
        int res = 0,power = 0;
        while(num > 0) {
            res |= !(num & 1) << power;
            power++;
            num >>= 1;
        }
        return res;
    }
};
