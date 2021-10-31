class Solution:
    def threeSum_hashtable(self, nums):
        result = []
        nums.sort()
        length = len(nums)
        record = [0] * length
        for a in range(len(nums)):
            if nums[a] > 0:
                continue
            if a > 0 and nums[a] == nums[a - 1]:
                continue
            for b in range(len(nums[a:])):
                if b > a + 2 and nums[b] == nums[b - 1] and nums[b - 1] == nums[b - 2]:
                    continue
                c = 0 - nums[a] - nums[b]
                if c in nums & c != nums[-1]:
                    result.append([nums[a], nums[b], nums[c]])
                    result.remove(c)
                else:
                    result.append([nums[a], nums[b], nums[c]])
                    break
        return result

    def threeSum_pointer(self, nums):
        result = []
        n = len(nums)
        nums.sort()
        for i in range(n)
            left = i + 1
            right = n - 1
            if nums[i] > 0:
                break
            if i >= 1 and nums[i] == nums[i - 1]:
                continue
            while left < right:
                total = nums[i] + nums[left] + nums[right]
                if total > 0:
                    right -= 1
                elif total < 0:
                    left += 1
                else:
                    result.append([nums[i], nums[left], nums[right]])
                while left != right and nums[left] == nums[left + 1]:
                    left += 1
                while left != right and nums[right] == nums[right - 1]:
                    right -= 1
                left += 1
                right -= 1
            return result




