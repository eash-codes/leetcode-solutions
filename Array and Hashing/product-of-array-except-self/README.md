# Product of array except self

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/product-of-array-except-self/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-95.8%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

So basically what I did was create an ans array first that consisits the prefix product of all the array elelments and then later multiplied that with the suffix .

So keep track of prev sum for all the elements except itself . Then multiply them with the suffix .

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(1)`

---

## ⚠️ Potential Pitfalls & Edge Cases

_None recorded._

---

## 🏷️ Algorithmic Patterns & Tags

`Array and Hashing` `How do you create an ans vector that is the product of original array except the ith number .`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 48.56 days |
| **Expected Retrievability ($R$)** | 95.8% |
| **Total Review Repetitions** | 4 |
| **Next Review Due** | 10/14/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
