# Pattern 7: Pyramid Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
   *
  ***
 ***** 
*******
```

## Approach
For every row i, print (n - i - 1) leading spaces to center the triangle, then print (2*i + 1) stars.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
