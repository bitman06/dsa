# 75. Sort Colors

## 🔗 Problem

https://leetcode.com/problems/sort-colors/

**Difficulty:** 🟡 Medium

---

# Approaches

## 🥉 Brute Force

### Idea

Sort the array using Merge Sort (or any comparison-based sorting algorithm).

### Time Complexity

O(n log n)

### Space Complexity

O(n)

---

## 🥈 Better

### Idea

Count the number of 0s, 1s, and 2s.

Overwrite the array using the counts.

### Time Complexity

O(n)

### Space Complexity

O(1)

---

## 🥇 Optimal

### Idea

Use the **Dutch National Flag Algorithm**.

Maintain three pointers:

- low
- mid
- high

Partition the array into:

- 0s
- 1s
- Unknown
- 2s

Sort the array in a single traversal.

### Time Complexity

O(n)

### Space Complexity

O(1)

---

# Final Learning

This problem teaches how recognizing the input constraints (only three distinct values) allows a specialized linear-time algorithm instead of a general-purpose sort.

The Dutch National Flag Algorithm is the expected interview solution.

**Author:** Tejaswa Tiwari  
**Language:** C++