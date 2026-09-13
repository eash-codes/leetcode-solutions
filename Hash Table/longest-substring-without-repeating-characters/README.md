# Longest Substring Without Repeating Characters

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Reviewing-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-94.6%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Use a dynamic sliding window `[left, right]`. Maintain a map of each character's last seen position. If character at `right` was seen inside the current window, fast-forward `left = map[char] + 1`.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(min(N, AlphabetSize))`

---

## ⚠️ Potential Pitfalls & Edge Cases

Forgetting to check `char_idx[ch] >= left`. If an old character appeared before `left`, do not move `left` backward!

---

## 🏷️ Algorithmic Patterns & Tags

`Hash Table` `String` `Sliding Window` `Last-Seen Index Map`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 5.48 days |
| **Expected Retrievability ($R$)** | 94.6% |
| **Total Review Repetitions** | 2 |
| **Next Review Due** | 9/16/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
