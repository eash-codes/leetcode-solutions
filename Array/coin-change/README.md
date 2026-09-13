# Coin Change

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/coin-change/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Retained-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-94.9%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Define `dp[a]` as fewest coins to make amount `a`. For each amount from 1 to `amount`, test all coins `c <= a`: `dp[a] = min(dp[a], 1 + dp[a - c])`.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(amount * len(coins))`
- **Space Complexity**: `O(amount)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Greedy approach fails on arbitrary coin denominations (e.g. coins=[1,3,4], amount=6: greedy gives 4+1+1=3, DP gives 3+3=2).

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Dynamic Programming` `Breadth-First Search` `Bottom-Up DP` `Unbounded Knapsack`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 18.40 days |
| **Expected Retrievability ($R$)** | 94.9% |
| **Total Review Repetitions** | 3 |
| **Next Review Due** | 9/23/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
