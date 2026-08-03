# Problem 1: Factorial of a Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given an integer n, find n! (the product of all positive integers up to n).

## Example
```
Input: n = 5
Output: 120
```

## Approach
Base case: `0! = 1` and `1! = 1`. For any other n, `n! = n * (n-1)!` — the function calls itself with a smaller input until it hits the base case, then the results multiply back up the call stack.

> **Note:** Couldn't find your original version, so this is a clean standard implementation — swap it out if yours differs.

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) — recursion stack depth
