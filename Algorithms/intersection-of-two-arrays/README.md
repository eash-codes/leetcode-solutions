# Intersection Of Two Arrays

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/intersection-of-two-arrays/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Retained-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Converting the first array into a hash set enables average O(1) membership lookups for fast element matching. Iterating through the second array and collecting common elements into a second set automatically handles deduplication of the final result set.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n + m) average time, where n is nums1.size() and m is nums2.size().`
- **Space Complexity**: `O(n + min(n, m)) space to store elements in the hash sets.`

---

## ⚠️ Potential Pitfalls & Edge Cases

Creating the initial hash set on the larger array leads to suboptimal space complexity compared to using the smaller array. Hash collision worst-cases can degrade lookup time from O(1) to O(n), resulting in O(n * m) runtime.

---

## 🏷️ Algorithmic Patterns & Tags

`Hash Set` `Lookup Table`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 15.74 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 2 |
| **Next Review Due** | 14/11/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
