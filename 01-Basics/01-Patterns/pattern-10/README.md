# Pattern 10: Right-Angled Triangle Diamond (Increasing-Decreasing Stars)

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
*
**
***
****
***
**
*
```

## Approach
There are (2n - 1) rows total. For row i (1-indexed), the star count climbs from 1 up to n, then comes back down to 1. If i > n, mirror it using (2n - i).

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
