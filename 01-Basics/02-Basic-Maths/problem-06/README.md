# Problem 6: Print All Divisors of a Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
Given an integer n, print all its divisors.

## Example
```
Input: n = 36
Output: 1 36 2 18 3 12 4 9 6
```

## Approach
Instead of checking every number from 1 to n (O(n)), only loop up to `sqrt(n)`. For every `x` that divides `n`, both `x` and `n / x` are divisors — add both (unless they're equal, e.g. at a perfect square, to avoid a duplicate).

## Complexity
- **Time Complexity:** O(√n)
- **Space Complexity:** O(number of divisors)
