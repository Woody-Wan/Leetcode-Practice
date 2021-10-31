class Solution:
    def search(self, num, target):
        left = 0
        right = len(num) - 1
        while left <= right:
            mid = (right + left) // 2
            if target < num[mid]:
                left = mid + 1
            elif target > num[mid]:
                right = mid - 1
            else:
                return mid
            if target > num[left] or target < num[right]:
                return -1







