class Solution:
    def remove_extra_space(self, s):
        length = len(s)
        left = 0
        right = length - 1

        while left <= right and s[left] == 0:
            left += 1
        while left <= right and s[right] == 0:
            right -= 1

        temp = []
        while left <= right:
            if s[left] != " ":
                temp.append(s[left])
            elif temp[-1] != " ":
                temp.append(s[left])
            left += 1
        return temp

    def reverse_all(self, s, left, right):
        while left < right:
            temp = s[left]
            s[left] = s[right]
            s[right] = temp
            right -= 1
            left += 1
        return None

    def resort_word(self, s):
        left = 0
        right = 0
        while left < len(s):
            while right < len(s) and s[right] != " ":
                right += 1
            self.reverse_all(s, left, right-1)
            right += 1
            left = right
        return None

    def reverseWords(self, s):
        string = self.remove_extra_space(s)
        self.reverse_all(string,  0, len(string) - 1)
        print(string)
        self.resort_word(string)
        print(string)
        return ''.join(string)

test = Solution()
print(test.reverseWords("the sky is blue"))