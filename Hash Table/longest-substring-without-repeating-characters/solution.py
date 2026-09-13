"""
Problem: Longest Substring Without Repeating Characters
Difficulty: Medium
URL: https://leetcode.com/problems/longest-substring-without-repeating-characters/
Time Complexity: O(N)
Space Complexity: O(min(N, AlphabetSize))
"""

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_idx = {}
        max_len = 0
        left = 0
        
        for right, ch in enumerate(s):
            if ch in char_idx and char_idx[ch] >= left:
                left = char_idx[ch] + 1
            char_idx[ch] = right
            max_len = max(max_len, right - left + 1)
            
        return max_len