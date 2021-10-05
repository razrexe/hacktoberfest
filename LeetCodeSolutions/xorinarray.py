class Solution:
    def xorOperation(self, n: int, start: int) -> int:
	
        xor = int() # Make an integer to store final result
        temp = [] # List to iterate the range of numbers
		
        for i in range(0,n):
		# Create a list with the range from the inputs
            temp.append(start+(2*i))
			# Add integers to the list as per the formula in the question
			
        for i in temp:
		# Iterate
            xor = xor^i
			# Get the xor result with iterating all elements
			
        return xor
		# Return the final XOR result
