class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res = []
        for left in range(n):
            if left > 0 and nums[left] == nums[left - 1]:
                continue
            for i in range(nums[left+1:]):
                if i > left + 1 and nums[i] == nums[i-1]:
                    continue
            j = i + 1
            right = n - 1

            while j < right:
                if nums[left] + nums[i] + nums[j] + nums[right] > target:
                    right -= 1
                elif nums[left] + nums[i] + nums[j] + nums[right] < target:
                    j += 1
                else:
                    res.append([nums[left], nums[i], nums[j], nums[right]])
                    while j < right and nums[j] == nums[j+1]:
                        j += 1
                    while j < right and nums[right] == nums[right-1]:
                        right -= 1
                    j += 1
                    right -= 1
        return res

