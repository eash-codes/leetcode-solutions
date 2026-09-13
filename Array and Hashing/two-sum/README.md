# Two Sum

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/two-sum/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-00b8a3?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-93.1%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

💡 Hash Map Lookup (Value -> Index)

• As you iterate through the array at index i:
  1. Calculate complement = target - nums[i]
  2. If complement exists in map, return [map[complement], i]
  3. Otherwise, store map[nums[i]] = i

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N) — Single pass through array`
- **Space Complexity**: `O(N) — Hash Map stores at most N elements`

---

## ⚠️ Potential Pitfalls & Edge Cases

_None recorded._

---

## 🏷️ Algorithmic Patterns & Tags

`Array and Hashing` `How do you find two numbers in an array that add up to a target sum in a single pass O(N) time?`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 41.58 days |
| **Expected Retrievability ($R$)** | 93.1% |
| **Total Review Repetitions** | 2 |
| **Next Review Due** | 9/26/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
