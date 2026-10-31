# Recover Binary Search Tree

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/recover-binary-search-tree/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Reviewing-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

An inorder traversal of a valid BST produces a strictly increasing sequence, so any adjacent inversion (root->val < pred->val) reveals a swapped pair. With exactly two swapped nodes, there are either one inversion (adjacent swaps: x = pred, y = root) or two inversions (non-adjacent swaps: x = pred of the first inversion, y = root of the last inversion), so we record x only on the first violation and overwrite y on every violation.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(h) recursion stack, where h is the tree height (O(log n) balanced, O(n) worst case)`

---

## ⚠️ Potential Pitfalls & Edge Cases

Must compare with the immediate inorder predecessor (pred), not just children — a swapped node may not violate the BST property locally with its own subtree. The early 'return' when both x and y are found only exits the current recursion frame, but since y is already fixed, remaining traversal is unnecessary and harmless. Edge cases: adjacent swapped nodes produce only one inversion (must keep x = pred, not root); don't swap TreeNode pointers (would break tree structure) — swap only the values. Beware duplicate values are excluded by problem constraints (strictly increasing inorder).

---

## 🏷️ Algorithmic Patterns & Tags

`Tree` `Depth-First Search` `Binary Search Tree` `Binary Tree` `Inorder Traversal of BST` `Morris-like Two-Pointer Defect Detection (Recursive DFS)`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 15.47 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 1 |
| **Next Review Due** | 16/11/2026 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
