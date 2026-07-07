# 3731. Find Missing Elements

## 🔗 Problem

**LeetCode:** https://leetcode.com/problems/find-missing-elements/

**Difficulty:** 🟢 Easy

---

## 📝 Problem Statement

Given an integer array `nums`, return all the integers that are missing between the minimum and maximum values present in the array.

The missing numbers should be returned in ascending order.

---

# 💡 Approaches

| Approach | Idea | Time | Space | Status |
|----------|------|------|-------|--------|
| Brute | Sort the array and identify the gaps | O(n log n) | O(1)\* | 🥉 |
| Better | Count occurrences using a frequency array | O(n) | O(1)\*\* | 🥈 |
| Optimal | Store elements in an `unordered_set` and check for missing values | O(n) | O(n) | 🥇 |

> \* Ignoring the recursion stack used by Merge Sort.  
> \*\* Uses a fixed-size frequency array based on the problem constraints.

---

# 🥉 Brute Approach

### Idea

1. Sort the array.
2. Traverse the sorted array.
3. Detect gaps between consecutive numbers.
4. Store all missing numbers.

### Time Complexity

**O(n log n)**

### Space Complexity

**O(1)** (excluding the output vector)

---

# 🥈 Better Approach

### Idea

1. Find the minimum and maximum values.
2. Count the frequency of every number using a fixed-size array.
3. Traverse the range from `min` to `max`.
4. Any number with frequency `0` is missing.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)** (fixed-size frequency array)

---

# 🥇 Optimal Approach

### Idea

1. Find the minimum and maximum values.
2. Insert every element into an `unordered_set`.
3. Traverse the range from `min` to `max`.
4. If a number is not present in the set, add it to the answer.

### Time Complexity

**O(n)** (average case)

### Space Complexity

**O(n)**

---

# 📚 Learning Outcome

- Understood how sorting can be used to identify missing values.
- Learned that a frequency array can improve time complexity when the value range is bounded.
- Practiced using `unordered_set` for efficient average-case lookups.
- Compared different approaches and analyzed their time-space trade-offs.

---

## 🧠 Concepts Used

- Arrays
- Sorting
- Hashing
- Frequency Array
- Unordered Set

---

**Author:** Tejaswa Tiwari  
**Language:** C++