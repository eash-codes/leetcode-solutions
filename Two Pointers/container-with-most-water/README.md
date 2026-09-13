# Container With Most Water

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/container-with-most-water/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-96.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Remember (r-l)*min(h[l],h[r]); This is literally it . Iterate thru the the heights and find the max area and print it . Keep two pointer and each end and shrink them based on ther condition that the side which is small we shrink it to find a bigger wall .

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(1)`

---

## ⚠️ Potential Pitfalls & Edge Cases

_None recorded._

---

## 🏷️ Algorithmic Patterns & Tags

`Two Pointers` `How do you find a container capabale of holding the most amount of water ........`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 32.61 days |
| **Expected Retrievability ($R$)** | 96.0% |
| **Total Review Repetitions** | 2 |
| **Next Review Due** | 10/7/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
