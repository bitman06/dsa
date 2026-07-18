# 217. Contains Duplicate

**Difficulty:** 🟢 Easy

**Problem Link:** https://leetcode.com/problems/contains-duplicate/

---

## Problem Statement

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

---

# Approach 1: Brute Force (Frequency Map)

### Idea

Store the frequency of every element using an unordered map. After building the frequency map, traverse the array again and check whether any element appears more than once.

### Algorithm

1. Create an unordered map.
2. Traverse the array and count the frequency of each element.
3. Traverse the array again.
4. If any frequency is greater than 1, return `true`.
5. Otherwise, return `false`.

### Time Complexity

**O(n)**

### Space Complexity

**O(n)**

---

# Approach 2: Better (Sorting)

### Idea

If the array is sorted, duplicate elements become adjacent. After sorting, simply compare every element with its next element.

### Algorithm

1. Sort the array.
2. Traverse the array.
3. Compare every pair of adjacent elements.
4. If two adjacent elements are equal, return `true`.
5. Otherwise, return `false`.

### Time Complexity

**O(n log n)**

### Space Complexity

**O(1)** *(excluding the sorting algorithm's internal space)*

---

# Approach 3: Optimal (Hash Set)

### Idea

Traverse the array once while storing previously seen elements inside an unordered set.

If an element is already present in the set, a duplicate has been found immediately.

### Why does this work?

A hash set allows average **O(1)** lookup and insertion.

While traversing the array:

- If the current element has never been seen, insert it.
- If it already exists in the set, a duplicate is present.

This avoids an extra traversal and stops as soon as a duplicate is found.

### Algorithm

1. Create an empty unordered set.
2. Traverse the array.
3. If the current element already exists in the set, return `true`.
4. Otherwise, insert it into the set.
5. If the traversal completes, return `false`.

### Time Complexity

**O(n)**

### Space Complexity

**O(n)**

---

# Concepts Used

- Arrays
- Hashing
- Sorting
- Hash Set

---

## Key Takeaway

There are multiple ways to detect duplicates:

- A frequency map counts every occurrence but requires two passes.
- Sorting groups equal elements together, allowing duplicates to be detected by comparing adjacent elements.
- A hash set is the most efficient approach, detecting duplicates during a single traversal with average constant-time lookup.

---

**Author:** Tejaswa Tiwari
**Language Used** C++