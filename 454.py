class Solution(object):
    def fourSumCount(self, nums1, nums2, nums3, nums4):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type nums3: List[int]
        :type nums4: List[int]
        :rtype: int
        """
        # use a dict to store the elements in nums1 and nums2 and their sum
        recordA = dict()
        for val1 in nums1:
            for val2 in nums2:
                if val1 + val2 in recordA:
                    recordA[val1 + val2] += 1
                else:
                    recordA[val1 + val2] = 1
        count = 0
        for val3 in nums3:
            for val4 in nums4:
                if (- val3 - val4) in recordA:
                    count += recordA[- val3 - val4]
        return count

def fourSumCount_ver_2nd(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
    from collections import defaultdict

    hashmap = defaultdict(int)

    for x1 in nums1:
        for x2 in nums2:
            hashmap[x1+x2] += 1

    count = 0
    for x3 in nums3:
        for x4 in nums4:
            key = 0 - x3 - x4
            value = hashmap[key]  # 若差值(key)不存在，则value被赋值0
            count += value
    return count


