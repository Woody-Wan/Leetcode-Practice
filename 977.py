class Solution:
    def sortedsquares(self, nums):
        n = len(nums)
        result = [0] * n
        for i in range(n):
            right = nums[n - i] * nums[n - i]
            left = nums[i] * nums[i]
            if right > left:
                result[n-i] = right
            elif right < left:
                result[n-i] = left
            else:
                result[0] = left
            i += 1
        return result
