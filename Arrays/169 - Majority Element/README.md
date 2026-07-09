# 169. Majority Element

## 🔗 Problem

**LeetCode:** https://leetcode.com/problems/majority-element/

**Difficulty:** 🟢 Easy

---

## 📝 Problem Statement

Given an array `nums` of size `n`, return the **majority element**.

The majority element is the element that appears **more than ⌊n / 2⌋ times**.

You may assume that the majority element always exists in the array.

---

# 💡 Approaches

| Approach | Technique | Time | Space | Status |
|----------|-----------|------|-------|--------|
| Brute | Sorting | O(n log n) | O(log n) | 🥉 |
| Better | Hash Map | O(n) | O(n) | 🥈 |
| Optimal | Boyer-Moore Voting Algorithm | O(n) | O(1) | 🥇 |

---

# 🥉 Brute Approach

### Idea

1. Sort the array.
2. Traverse the sorted array while counting consecutive occurrences.
3. Return the element whose count becomes greater than `n / 2`.

### Time Complexity

**O(n log n)**

### Space Complexity

**O(log n)**

---

# 🥈 Better Approach

### Idea

1. Store the frequency of every element using an `unordered_map`.
2. Traverse the map.
3. Return the element whose frequency exceeds `n / 2`.

### Time Complexity

**O(n)**

### Space Complexity

**O(n)**

---

# 🥇 Optimal Approach

### Idea

Use the **Boyer-Moore Voting Algorithm**.

1. Maintain a candidate and a counter.
2. If the counter becomes zero, choose the current element as the new candidate.
3. Increase the counter if the current element matches the candidate; otherwise decrease it.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

# 📚 Learning Outcome

- Learned how sorting can simplify frequency-based problems.
- Practiced using a hash map for frequency counting.
- Understood the Boyer-Moore Voting Algorithm for finding the majority element in linear time with constant extra space.
- Compared different approaches and analyzed their time-space trade-offs.

---

## 🧠 Concepts Used

- Arrays
- Sorting
- Hash Map
- Boyer-Moore Voting Algorithm

---

**Author:** Tejaswa Tiwari  
**Language:** C++  
