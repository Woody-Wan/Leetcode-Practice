class Solution:
    def isAnagram(self, ListA, ListB):
        record = [0] * 26
        for i in range(len(ListA)):
            record[ord(ListA[i]) - ord('a')] = record[ord(ListA[i]) - ord('a')] + 1
        for i in range(len(ListB)):
            record[ord(ListB[i]) - ord('a')] = record[ord(ListB[i]) - ord('a')] - 1
        for i in range(26):
            if (record[i] != 0):
                return False
        return True