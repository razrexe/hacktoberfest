class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int count = 0;
        for (int i = L; i <= R; i++)
            if (isPrime(__builtin_popcount(i)))
                count++;
        return count;
    }
    
    bool isPrime(int num) {
        return (num == 2 or num == 3 or num == 5 or num == 7 
                or num == 11 or num == 13 or num == 17 or num == 19);
    }
};
