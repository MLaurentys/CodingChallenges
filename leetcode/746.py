# https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution:
    def __init__(self):
        self.addedCost = []

    def minCostRec(self, cost, step):
        if step < len(self.addedCost):
            return self.addedCost[step]
        stepC = min(self.minCostRec(cost, step-1), self.minCostRec(cost, step-2)) + cost[step]
        self.addedCost.append(stepC)
        return stepC

    def minCostClimbingStairs(self, cost: List[int]) -> int:
        self.addedCost.append(cost[0])
        self.addedCost.append(cost[1])
        v = min(self.minCostRec(cost, len(cost) - 2), self.minCostRec(cost, len(cost) - 1))
        return v
