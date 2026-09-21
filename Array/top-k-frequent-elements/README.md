# Top K Frequent Elements

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/top-k-frequent-elements/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Learning-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Count frequencies using a hash map, then maintain a min-heap of size k. The heap keeps the k largest frequencies by evicting the smallest whenever size exceeds k, so the remaining elements are the top k frequent.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n log k)`
- **Space Complexity**: `O(n)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Ensure k is valid (1 ≤ k ≤ number of unique elements). The heap stores pairs (frequency, value), so ties are broken by value but that does not affect correctness. If k equals the number of unique elements, no eviction occurs. The output order is arbitrary and not required to be sorted.

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Hash Table` `Divide and Conquer` `Sorting` `Heap (Priority Queue)` `Bucket Sort` `Counting` `Quickselect`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 0.83 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 7 |
| **Next Review Due** | 9/22/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
