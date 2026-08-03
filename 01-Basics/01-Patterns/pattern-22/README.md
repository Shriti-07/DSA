# Pattern 22: Concentric Number Diamond Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
```

## Approach
For every cell (i, j) in a (2n-1) x (2n-1) grid, find its distance from the nearest edge (top, bottom, left, right) using min(), then print (n - that distance).

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
