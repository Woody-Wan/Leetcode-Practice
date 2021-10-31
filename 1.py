class Solution:
    def twosum(self, nums, target):
        record = dict()
        for index, val in record:
            if (target - val) in enumerate(nums):
                return [record[target - val], index]
            else:
                record[val] = index
