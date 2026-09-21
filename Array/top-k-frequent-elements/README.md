# Top K Frequent Elements

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/top-k-frequent-elements/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Learning-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Element frequencies are aggregated using a hash map to map each unique value to its count. A min-heap bounded to size K retains only the K highest frequency elements by continuously evicting the current minimum frequency candidate in O(log k) time.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N log k)`
- **Space Complexity**: `O(N)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Using a max-heap pushes time complexity to O(N log N) since all unique elements must be stored; a min-heap must be used to maintain the bounded size K. In C++ priority_queue, the comparison order defaults to the first pair member, so pair elements must be ordered as {frequency, element} rather than {element, frequency}.

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Hash Table` `Divide and Conquer` `Sorting` `Heap (Priority Queue)` `Bucket Sort` `Counting` `Quickselect` `Heap / Priority Queue (Top K)` `Hash Table (Frequency Map)`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 0.83 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 6 |
| **Next Review Due** | 9/22/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
