class Solution:
    def reverseBits(self, n: int) -> int:
        reversed = 0
        for i in range(32):
            reversed = reversed << 1
            reversed |= (n >> i) & 0x1
        return reversed
