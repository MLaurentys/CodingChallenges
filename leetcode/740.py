# https://leetcode.com/problems/delete-and-earn/

class Solution:

    def __init__(self):
        self.acc = {}
        self.counts = {}
        self.vals = []

    def solveRec(self, index):
        if index < 0: return 0
        v = self.vals[index]
        if index == 0: return v * self.counts[v]
        if index in self.acc: return self.acc[index]
        if self.vals[index-1] != v - 1:
            self.acc[index] = self.solveRec(index - 1) + v * self.counts[v]
        else:
            v1 = self.solveRec(index - 1)
            v2 = self.solveRec(index - 2) + v * self.counts[v]
            self.acc[index] = max(v1,v2)
        return self.acc[index]

    def deleteAndEarn(self, nums: List[int]) -> int:
        self.vals = sorted(list(set(nums)))
        self.counts = {el:0 for el in self.vals}
        for el in nums: self.counts[el] += 1

        return self.solveRec(len(self.vals) - 1)