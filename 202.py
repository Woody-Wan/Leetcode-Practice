class Solution :
    def isHappy(self, n: int) -> bool:
        def GetSum(self, n):
            Sum = 0
            while n:
                Sum = Sum + (n % 10) * (n % 10)
                n = n // 10
            return Sum

        record = set()

        while True:
            n = GetSum(n)
            if n == 1:
                return True
            if n in record :
                return False
            else:
                record.add(n)
