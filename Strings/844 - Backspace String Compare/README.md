# 844. Backspace String Compare

## 🔗 Problem

**LeetCode:** https://leetcode.com/problems/backspace-string-compare/

**Difficulty:** 🟢 Easy

---

## 📝 Problem Statement

Given two strings `s` and `t`, where the `#` character represents a backspace, determine whether both strings are equal after processing all backspaces.

---

## 💡 Approach

This solution uses **two stacks** to simulate typing in a text editor.

### Algorithm

1. Traverse both strings independently.
2. Push every normal character onto its respective stack.
3. When `#` is encountered, remove the top character from the stack if it is not empty.
4. After processing both strings, compare the contents of both stacks.
5. If all characters match, return `true`; otherwise, return `false`.

---

## ⏱️ Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n + m)** |
| **Space Complexity** | **O(n + m)** |

where:

- `n` = length of string `s`
- `m` = length of string `t`

---

## 🧠 Concepts Used

- Stack
- String
- Simulation

---

## 🚀 Future Improvement

This problem can also be solved using a **Two Pointer** approach with **O(1)** extra space.

I plan to implement and document the optimized solution later as I continue learning.

---

## 📌 Learning Outcome

- Learned how stacks can simulate text editor operations.
- Practiced handling edge cases such as multiple consecutive backspaces.
- Understood that simulation problems often have a more space-efficient solution.

---

**Author:** Tejaswa Tiwari  
**Language:** C++