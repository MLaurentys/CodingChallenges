# https://leetcode.com/problems/fibonacci-number/

class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        fib1 = 0
        fib2 = 1
        for i in range(2, n + 1):
            fib1, fib2 = fib2, fib1 + fib2
        return fib2