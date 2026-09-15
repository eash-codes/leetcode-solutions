# Trapping Rain Water

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/trapping-rain-water/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

The water trapped above any elevation bar is strictly bounded by the minimum of the highest wall to its left and the highest wall to its right, minus its own height. Precomputing these left and right maximum boundaries via two directional passes allows calculating the trapped water per cell in O(1) time.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(N)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Accessing `h[0]` and `h[n-1]` without checking if the array is empty will cause out-of-bounds runtime errors. Additionally, while correct, this precomputation uses O(N) extra space which can be optimized to O(1) auxiliary space using a two-pointer approach.

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Two Pointers` `Dynamic Programming` `Stack` `Monotonic Stack` `Prefix / Suffix Precomputation`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 209.19 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 4 |
| **Next Review Due** | 4/12/2027 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
