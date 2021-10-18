class Solution:

    def generateMatrix(self, n: int) -> List[List[int]]:
        matrix = [0] * n
        matrix = [matrix] * n
        layer = 0
        num = 1
        length = n - 1
        while length > 0:
            for i in range(length):
                matrix[layer][layer + i] = num
                num += 1
            for i in range(length):
                matrix[layer + i][n - layer - 1] = num
                num += 1
            for i in range(length):
                matrix[n - layer - 1][n - layer - i - 1] = num
                num += 1
            for i in range(length):
                matrix[n - layer - i - 1][layer] = num
                num += 1
            layer += 1
        return matrix

