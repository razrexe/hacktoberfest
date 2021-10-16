class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        arr = [first]
        for i in range(0, len(encoded)):
            arr.append(arr[i] ^ encoded[i])
        return arr
