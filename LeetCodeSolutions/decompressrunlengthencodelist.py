class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        
        decode_output= []
        
        for i in range( 0, len(nums), +2):
            
            frequency = nums[i]                             
            value     = nums[i+1]                           
            decode_output.extend( [value ] * frequency )               
            
        return decode_output
