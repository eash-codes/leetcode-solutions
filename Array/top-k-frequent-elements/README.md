# Top K Frequent Elements

[![LeetCode Problem](https://img.shields.io/badge/LeetCode-Problem_Link-FFA116?style=flat&logo=leetcode&logoColor=black)](https://leetcode.com/problems/top-k-frequent-elements/)
[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-ffc01e?style=flat)]()
[![FSRS Status](https://img.shields.io/badge/FSRS_Mastery-Retained-38bdf8?style=flat)]()
[![Retrievability](https://img.shields.io/badge/Recall_Probability-100.0%25-10b981?style=flat)]()

## 🧠 Algorithmic Invariants & Core Intuition

Counting frequencies maps elements to their occurrences in O(N) time. By maintaining a min-heap restricted to size k, the smallest frequency element is continually evicted, guaranteeing that only the top k most frequent elements remain in the heap.

---

## ⚡ Complexity Analysis

- **Time Complexity**: `O(N log k), where N is the size of nums and k is the target frequency threshold. Counting takes O(N), and inserting U unique elements into a min-heap of max size k takes O(U log k).`
- **Space Complexity**: `O(U + k), where U is the number of unique elements in nums stored in the frequency map, and k is the size limit of the min-heap. In the worst case, this is O(N).`

---

## ⚠️ Potential Pitfalls & Edge Cases

Remember that C++ priority_queue defaults to a max-heap, so `greater` must be explicitly passed to convert it to a min-heap. Another potential pitfall is assuming bucket sort optimization isn't needed; while O(N log k) works well, bucket sort can achieve optimal O(N) time.

---

## 🏷️ Algorithmic Patterns & Tags

`Array` `Hash Table` `Divide and Conquer` `Sorting` `Heap (Priority Queue)` `Bucket Sort` `Counting` `Quickselect` `Min-Heap / Priority Queue`

---

## 📈 FSRS Spaced Repetition Metrics

| Metric | Value |
| :--- | :--- |
| **Stability ($S$)** | 66.03 days |
| **Expected Retrievability ($R$)** | 100.0% |
| **Total Review Repetitions** | 9 |
| **Next Review Due** | 10/1/2027 |

---

*Synchronized automatically via [PacedLearner](https://github.com/eash-codes) — FSRS Spaced Repetition Algorithmic Mastery.*
