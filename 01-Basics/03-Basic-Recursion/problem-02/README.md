# Problem 2: Nth Fibonacci Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given n, find the nth Fibonacci number, where F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2).

## Example
```
Input: n = 5
Output: 5
Explanation: 0, 1, 1, 2, 3, 5
```

## Approach
Base cases: F(0) = 0 and F(1) or F(2) = 1. Otherwise, recursively add the two previous Fibonacci numbers.

> **Note:** This naive version recomputes the same sub-values many times, so it's exponential — fine for small n, but for large n you'd want memoization (store already-computed fib values) to bring it down to O(n).

## Complexity
- **Time Complexity:** O(2ⁿ)
- **Space Complexity:** O(n) — recursion stack depth
