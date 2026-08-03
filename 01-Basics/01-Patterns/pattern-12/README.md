# Pattern 12: Numeric Palindromic Pattern (Number-Space-Number)

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
1      1
12    21
123  321
12344321
```

## Approach
Split each row into 3 parts: ascending numbers 1..i, then spaces (2*(n-i)) to create the middle gap, then descending numbers i..1.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
