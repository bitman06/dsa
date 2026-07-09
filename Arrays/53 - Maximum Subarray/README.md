# 53. Maximum Subarray

## 🔗 Problem

**LeetCode:** https://leetcode.com/problems/maximum-subarray/

**Difficulty:** 🟡 Medium

---

## 📝 Problem Statement

Given an integer array `nums`, find the **contiguous subarray** with the largest sum and return its sum.

---

# 💡 Approaches

| Approach | Technique | Time | Space | Status |
|----------|-----------|------|-------|--------|
| Brute | Generate every subarray and calculate its sum | O(n³) | O(1) | 🥉 |
| Better | Running Sum | O(n²) | O(1) | 🥈 |
| Optimal | Kadane's Algorithm | O(n) | O(1) | 🥇 |

---

# 🥉 Brute Approach

## Idea

1. Generate every possible subarray.
2. Calculate the sum of each subarray using a third loop.
3. Update the maximum sum encountered.

### Time Complexity

**O(n³)**

### Space Complexity

**O(1)**

---

# 🥈 Better Approach

## Idea

1. Fix the starting index.
2. Extend the ending index one element at a time.
3. Maintain a running sum instead of recalculating it.
4. Update the maximum sum after every extension.

### Time Complexity

**O(n²)**

### Space Complexity

**O(1)**

---

# 🥇 Optimal Approach

## Idea

Use **Kadane's Algorithm**.

1. Traverse the array while maintaining a running sum.
2. Update the maximum sum whenever the running sum becomes larger.
3. If the running sum becomes negative, reset it to `0`.

### Why Kadane's Algorithm Works

Suppose the running sum becomes negative at some index.

Any future subarray that includes this negative sum will always be **smaller** than the same subarray starting after it.

For example,

```text
-5 + 8 = 3
```

Instead of carrying `-5` forward, it is always better to start a new subarray from `8`.

A negative running sum can never increase the sum of any future subarray.

Therefore, whenever the running sum becomes negative, we discard it and start a new subarray from the next element.

This greedy decision guarantees that every possible maximum subarray is considered while scanning the array only once.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

# 📚 Learning Outcome

- Learned the progression from brute force to an optimal linear-time solution.
- Understood how maintaining a running sum reduces the complexity from **O(n³)** to **O(n²)**.
- Learned Kadane's Algorithm and the greedy intuition behind resetting the running sum.
- Compared different approaches and analyzed their time-space trade-offs.

---

## 🧠 Concepts Used

- Arrays
- Running Sum
- Greedy
- Kadane's Algorithm

---

**Author:** Tejaswa Tiwari  
**Language:** C++  
**Date Solved:** 09 July 2026