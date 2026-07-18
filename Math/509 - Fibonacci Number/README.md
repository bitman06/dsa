# 509. Fibonacci Number

**Difficulty:** 🟢 Easy

**Problem Link:** https://leetcode.com/problems/fibonacci-number/

---

## Problem Statement

The Fibonacci numbers are defined as:

- `F(0) = 0`
- `F(1) = 1`

For `n > 1`,

`F(n) = F(n - 1) + F(n - 2)`

Given an integer `n`, return the `n`th Fibonacci number.

---

# Approach 1: Brute Force (Recursion)

### Idea

The Fibonacci sequence follows a recursive relation where each number is the sum of the previous two numbers.

Recursively compute the answer by calling the function for `n - 1` and `n - 2` until the base cases are reached.

### Algorithm

1. If `n` is 0, return 0.
2. If `n` is 1, return 1.
3. Otherwise, return `fib(n - 1) + fib(n - 2)`.

### Time Complexity

**O(2ⁿ)**

### Space Complexity

**O(n)** *(Recursion stack)*

---

# Approach 2: Optimal (Iterative)

### Idea

Instead of repeatedly solving the same subproblems, compute Fibonacci numbers iteratively while keeping track of only the previous two values.

This avoids recursion and uses constant extra space.

### Algorithm

1. Handle the base cases (`n = 0` and `n = 1`).
2. Initialize two variables:
   - `a = 0`
   - `b = 1`
3. Traverse from 2 to `n`.
4. Compute the next Fibonacci number.
5. Update the previous two values.
6. Return the final answer.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

# Concepts Used

- Recursion
- Iteration
- Mathematics

---

## Key Takeaway

The recursive solution directly follows the mathematical definition of the Fibonacci sequence but performs many repeated calculations, making it inefficient.

The iterative solution computes each Fibonacci number only once while storing only the previous two values, reducing the time complexity to **O(n)** and the space complexity to **O(1)**.

---

**Author:** Tejaswa Tiwari
**Language Used:** C++