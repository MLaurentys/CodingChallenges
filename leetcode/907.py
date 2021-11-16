# https://leetcode.com/problems/sum-of-subarray-minimums/

class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        dp = [0] * len(arr)
        stack = []
        for ind, el in enumerate(arr):
            while len(stack) > 0 and stack[-1][0] > el:
                stack.pop()
            if len(stack) != 0:
                dp[ind] = dp[stack[-1][1]] + el * (ind - stack[-1][1])
            else:
                dp[ind] = (ind + 1) * el

            stack.append((el, ind))
        return sum(dp) % (10**9 + 7)