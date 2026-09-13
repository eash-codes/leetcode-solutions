# Valid Anagram

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/valid-anagram/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-00b8a3?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-94.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Create a frequency array . Initialize with 26 , 0 .Add chars from S and chars from and T and the freq array should remain 0 . If not return false as it'll indicate extra characters

Create a freq array and for every char in both the strings update the array in opp manner suc that freq of each remains 0 and if there is a 1 in there it’ll indicate that the strings aren’t anagram 

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(1)`

---

## ⚠️ Potential Pitfalls & Edge Cases

_None recorded._

---

## 🏷️ Algorithmic Patterns & Tags

`Array and Hashing` `How do you determine if two strings, s and t, are anagrams of each other in optimal O(N) time?`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 54.58 days |
| **Expected Retrievability ($R$)** | 94.0% |
| **Total Review Repetitions** | 2 |
| **Next Review Due** | 10/11/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
