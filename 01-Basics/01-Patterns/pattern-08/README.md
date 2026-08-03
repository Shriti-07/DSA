# Pattern 8: Inverted Pyramid Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
*******
 *****
  ***
   *
```

## Approach
Mirror image of Pattern 7. For row i, print i leading spaces, then (2*(n-i) - 1) stars.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
