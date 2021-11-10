# https://leetcode.com/problems/n-th-tribonacci-number/

class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
            return 0
        fib1, fib2, fib3 = 0,1,1
        for i in range(3, n + 1):
            fib1, fib2, fib3 = fib2, fib3, fib1 + fib2 + fib3
        return fib3