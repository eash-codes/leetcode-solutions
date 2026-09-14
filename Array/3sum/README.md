# 3Sum

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/3sum/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Retained-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

After sorting, fix nums[i] and use two pointers from both ends of the remaining suffix to find pairs summing to -nums[i]. If the sum is too large, decrease the right pointer; if too small, increase the left pointer. Skipping equal values prevents duplicate triplets while preserving all unique solutions.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n^2)`
- **Space Complexity**: `O(1) auxiliary, excluding output`

---

## ⚠️ Potential Pitfalls & Edge Cases

Sort the array before applying the two-pointer invariant, and ensure pointer movement remains within j < k. Skip duplicates for both the fixed index and after finding a valid triplet. For unrestricted integer ranges, compute the sum using a wider type such as long long to avoid overflow; the returned output itself requires O(m) space for m triplets.

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Two Pointers` `Sorting`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 88.02 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 5 |
| **Next Review Due** | 12/11/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
