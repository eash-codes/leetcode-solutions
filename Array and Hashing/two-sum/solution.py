"""
Problem: Two Sum
Difficulty: Easy
URL: https://leetcode.com/problems/two-sum/
Time Complexity: O(N) — Single pass through array
Space Complexity: O(N) — Hash Map stores at most N elements
"""

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]
            seen[num] = i
        return []