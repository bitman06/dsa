# 231. Power of Two

**Difficulty:** 🟢 Easy

**Problem Link:** https://leetcode.com/problems/power-of-two/

---

## Problem Statement

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two if there exists an integer `x` such that:

`n = 2ˣ`

---

# Approach 1: Brute Force (Count Set Bits)

### Idea

A power of two has exactly one set bit in its binary representation.

Repeatedly divide the number by 2 while counting the number of `1`s in its binary form. If more than one set bit exists, the number cannot be a power of two.

### Algorithm

1. If `n <= 0`, return `false`.
2. Repeatedly divide `n` by 2.
3. Count the number of remainders equal to `1`.
4. If the count becomes greater than `1`, return `false`.
5. Otherwise, return `true`.

### Time Complexity

**O(log n)**

### Space Complexity

**O(1)**

---

# Approach 2: Better (Generate Powers of Two)

### Idea

Generate all powers of two within the 32-bit integer range using `pow(2, i)` and compare each value with `n`.

If any generated value equals `n`, then `n` is a power of two.

### Algorithm

1. Iterate `i` from `0` to `30`.
2. Compute `pow(2, i)`.
3. If it equals `n`, return `true`.
4. If no match is found, return `false`.

### Time Complexity

**O(31)** ≈ **O(1)**

### Space Complexity

**O(1)**

---

# Approach 3: Optimal (Bit Manipulation)

### Idea

A power of two contains exactly one set bit.

Subtracting `1` from a power of two flips all the bits after the set bit.

Example:

```
8  = 1000
7  = 0111
-----------
&   0000
```

```
16 = 10000
15 = 01111
------------
&    00000
```

Therefore,

```cpp
n > 0 && (n & (n - 1)) == 0
```

is true only for powers of two.

### Algorithm

1. If `n <= 0`, return `false`.
2. Compute `n & (n - 1)`.
3. If the result is `0`, return `true`.
4. Otherwise, return `false`.

### Time Complexity

**O(1)**

### Space Complexity

**O(1)**

---

# Concepts Used

- Binary Representation
- Set Bits
- Bit Manipulation
- Bitwise AND Operator

---

## Key Takeaway

A power of two always contains exactly one set bit in its binary representation.

Although counting set bits or generating powers of two works correctly, the bit manipulation solution is the most elegant and efficient. Using the property:

```cpp
n > 0 && (n & (n - 1)) == 0
```

allows us to determine whether a number is a power of two in constant time with no extra space.

---

**Author:** Tejaswa Tiwari