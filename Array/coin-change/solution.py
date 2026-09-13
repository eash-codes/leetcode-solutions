"""
Problem: Coin Change
Difficulty: Medium
URL: https://leetcode.com/problems/coin-change/
Time Complexity: O(amount * len(coins))
Space Complexity: O(amount)
"""

class Solution:
    def coinChange(self, coins: list[int], amount: int) -> int:
        dp = [float('inf')] * (amount + 1)
        dp[0] = 0
        
        for a in range(1, amount + 1):
            for c in coins:
                if a - c >= 0:
                    dp[a] = min(dp[a], 1 + dp[a - c])
                    
        return dp[amount] if dp[amount] != float('inf') else -1