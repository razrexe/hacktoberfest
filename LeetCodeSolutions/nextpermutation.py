class Solution:
	def nextPermutation(self, nums: List[int]) -> None:
		index = len(nums) - 1
		while index - 1 >= 0 and nums[index] <= nums[index - 1]:
			index -= 1
			
		if index == 0:
			nums.reverse()
			return

		greater = index
		
		while greater + 1 < len(nums) and nums[greater + 1] > nums [index - 1]:
			greater += 1
		
		nums[greater], nums[index - 1] = nums[index - 1], nums[greater]
		nums[index :] = nums[index :][::-1]
