# 2149. Rearrange Array Elements by Sign

**Difficulty:** 🟡 Medium

**Problem Link:** https://leetcode.com/problems/rearrange-array-elements-by-sign/

---

## Problem Statement

Given an integer array `nums` of even length consisting of an equal number of positive and negative integers, rearrange the elements such that:

- Every consecutive pair has opposite signs.
- The relative order of positive integers is preserved.
- The relative order of negative integers is preserved.
- The rearranged array begins with a positive integer.

Return the modified array.

---

# Approach 1: Brute Force

### Idea

- Store all positive numbers in one vector.
- Store all negative numbers in another vector.
- Traverse both vectors and place positives at even indices and negatives at odd indices.

### Algorithm

1. Traverse the array and separate positive and negative numbers.
2. Traverse the positive vector and place elements at even indices.
3. Traverse the negative vector and place elements at odd indices.
4. Return the resulting array.

### Time Complexity

**O(n)**

### Space Complexity

**O(n)**

---

# Approach 2: Optimal

### Idea

Instead of storing positive and negative numbers separately, directly place each element into its correct position in the answer array during a single traversal.

Positive numbers occupy even indices, while negative numbers occupy odd indices.

### Why does this work?

The problem guarantees:

- Equal number of positive and negative integers.
- The answer must start with a positive number.
- Relative order must be preserved.

Since positive numbers always occupy even indices and negative numbers always occupy odd indices, we can maintain two pointers:

- One pointing to the next even index.
- One pointing to the next odd index.

As we traverse the array once, every element is immediately placed in its correct position while preserving the original order.

### Algorithm

1. Create an answer array of size `n`.
2. Maintain two indices:
   - `0` for the next positive position.
   - `1` for the next negative position.
3. Traverse the array once.
4. If the current element is positive, place it at the current even index and move the even pointer by 2.
5. Otherwise, place it at the current odd index and move the odd pointer by 2.
6. Return the answer array.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)** *(excluding the output array)*

or

**O(n)** *(including the output array)*

---

# Concepts Used

- Arrays
- Two Pointers
- Simulation

---

## Key Takeaway

The brute-force solution first separates positive and negative numbers before constructing the answer.

The optimal solution recognizes that each element's final position can be determined immediately during a single traversal, eliminating the need for additional temporary vectors while preserving the required ordering.

---

**Author:** Tejaswa Tiwari
**Language** C++