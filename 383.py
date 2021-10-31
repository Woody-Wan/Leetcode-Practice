class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        magletter = [0] * 26
        ranletter = [0] * 26
        for i in magazine:
            magletter[ord(i) - ord('a')] += 1
        for i in ransomNote:
            ranletter[ord(i) - ord('a')] += 1
        for i in range(26):
            if magletter[i] < ranletter[i]:
                return False
        return True

def canConstruct_ver2nd(self, ransomNote: str, magazine: str) -> bool:
    letter = [0] * 26
    for i in magazine:
        letter[ord(i) - ord('a')] += 1
    for i in ransomNote:
        letter[ord(i) - ord('a')] -= 1
        if letter[ord(i) - ord('a')] < 0:
            return False
    return True
