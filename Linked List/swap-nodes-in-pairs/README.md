# Swap Nodes in Pairs

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/swap-nodes-in-pairs/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Learning-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Use a dummy node and maintain prev/curr pointers to rewire each adjacent pair. For every complete pair, make the second node point to the first, the first point to the node after the pair, and prev point to the second. The precomputed length ensures only full pairs are swapped, leaving an odd trailing node unchanged.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(1)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Past errors: Compile Error

---

## 🏷️ Algorithmic Patterns & Tags

`Linked List` `Recursion` `Iterative Pointer Manipulation`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 3.13 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 1 |
| **Next Review Due** | 10/16/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
