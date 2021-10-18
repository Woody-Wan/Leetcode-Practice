class Solution:
    def minSubArrayLen(self, s, nums):
        n = len(nums)
        left = 0
        minlength = float("inf")
        for right in range(n):
            total = sum(nums[left: right])
            while total >= s:
                minlength = right - left
                left += 1

        if minlength == float("inf"):
            return 0
        else:
            return minlength




