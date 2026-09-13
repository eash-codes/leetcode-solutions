# Contains Duplicate

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/contains-duplicate/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-00b8a3?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-96.6%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

💡 Hash Set (Instant O(1) Lookup)

• Iterate through the array `nums` while maintaining a Hash Set `seen`:
  1. For each `num`, check if `num` is already in `seen`.
  2. If YES: Duplicate found → Return True.
  3. If NO: Insert `num` into `seen`.
• If loop finishes: Return False.

⚡ One-Liner Alternative:
• Compare `len(nums) != len(set(nums))`

Simply use freq and if freq exceeds 1 then return true . 

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(1)`

---

## ⚠️ Potential Pitfalls & Edge Cases

_None recorded._

---

## 🏷️ Algorithmic Patterns & Tags

`Array and Hashing` `How do you check if an array contains any duplicate values in optimal O(N) time?`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 59.12 days |
| **Expected Retrievability ($R$)** | 96.6% |
| **Total Review Repetitions** | 3 |
| **Next Review Due** | 10/21/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
