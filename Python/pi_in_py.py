# Python3 program to calculate the
# value of pi up to 3 decimal places
from math import acos

# Function that prints the
# value of pi upto N
# decimal places
def printValueOfPi():

	# Find value of pi upto 3 places
	# using acos() function
	pi = round(2 * acos(0.0), 3)

	# Print value of pi upto
	# N decimal places
	print(pi)


# Driver Code
if __name__ == "__main__":

	# Function that prints
	# the value of pi
	printValueOfPi()
