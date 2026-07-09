# 121. Best Time to Buy and Sell Stock

## 🔗 Problem

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

**Difficulty:** 🟢 Easy

---

## 📝 Problem Statement

You are given an array `prices` where `prices[i]` is the price of a stock on the `iᵗʰ` day.

Choose a single day to buy one stock and a different day in the future to sell it.

Return the maximum profit that can be achieved. If no profit is possible, return `0`.

---

# 💡 Approaches

| Approach | Technique | Time | Space | Status |
|----------|-----------|------|-------|--------|
| Brute | Check every buy-sell pair | O(n²) | O(1) | 🥉 |
| Better | Two-Pointer Implementation | O(n) | O(1) | 🥈 |
| Optimal | Track Minimum Price | O(n) | O(1) | 🥇 |

> **Note:** Both the Better and Optimal approaches have the same time and space complexity. The Optimal approach is considered better because it is simpler, easier to understand, and is the standard interview solution.

---

# 🥉 Brute Approach

## Idea

1. Consider every day as the buying day.
2. Try selling on every future day.
3. Calculate the profit for every possible pair.
4. Return the maximum profit obtained.

### Time Complexity

**O(n²)**

### Space Complexity

**O(1)**

---

# 🥈 Better Approach

## Idea

1. Maintain two pointers:
   - One representing the buying day.
   - One representing the selling day.
2. Whenever a lower buying price is found, update the buying pointer.
3. Calculate the profit for every valid selling day.
4. Keep track of the maximum profit.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

# 🥇 Optimal Approach

## Idea

1. Traverse the array once.
2. Maintain the minimum stock price seen so far.
3. For every day, calculate the profit if the stock were sold on that day.
4. Update the maximum profit whenever a larger profit is found.

### Why This Algorithm Works

To maximize profit, we only need two pieces of information while traversing the array:

- The **lowest buying price** seen so far.
- The **maximum profit** obtained so far.

At every index, the best possible transaction ending on that day is obtained by selling at the current price after buying at the minimum price seen previously.

Since every day is processed exactly once, every possible profitable transaction is considered without checking all buy-sell pairs.

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

# 📚 Learning Outcome

- Learned the brute-force approach for checking all buy-sell combinations.
- Improved the solution using a two-pointer implementation.
- Understood the standard optimal solution by tracking only the minimum price seen so far.
- Compared different implementations that achieve the same optimal time complexity.

---

## 💭 Key Insight

The maximum profit for any day depends **only on the minimum stock price seen before that day**. By maintaining this minimum while traversing the array once, we can compute the optimal answer in linear time.

---

## 🧠 Concepts Used

- Arrays
- Greedy
- Two Pointers
- Running Minimum

---

**Author:** Tejaswa Tiwari  
**Language:** C++  