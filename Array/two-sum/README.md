# Two Sum

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/two-sum/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

For each element, the invariant is that its required partner is target - nums[i]. By storing previously seen values and their indices in a hash map, we can check in O(1) whether the complement has already appeared before inserting the current element, guaranteeing the pair uses distinct indices.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(n)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Insert nums[i] into the map only after checking for the complement, otherwise a single element equal to target/2 could pair with itself (e.g., nums=[3,2,4], target=6). The map stores the most recent index for duplicate values, which is fine here but worth noting. The function must return exactly two indices, and the empty return {} is only a fallback for the guaranteed-solution constraint.

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Hash Table` `Single Pass Complement Lookup`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 686.04 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 3 |
| **Next Review Due** | 13/9/2028 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
