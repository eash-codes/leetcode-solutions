# Group Anagrams

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/group-anagrams/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Mastered-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Anagrams are equivalent under character sorting, so the sorted version of each string is a canonical key. Group all original strings in a hash map keyed by this sorted string, then collect each bucket as one anagram group.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n * k log k)`
- **Space Complexity**: `O(n * k)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Past errors: Compile Error

---

## 🏷️ Algorithmic Patterns & Tags

`Hash Map` `Sorting`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 166.73 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 5 |
| **Next Review Due** | 3/21/2027 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
