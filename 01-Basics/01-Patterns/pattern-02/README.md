# Pattern 2: Right Triangle Pattern

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
```

## Approach
Outer loop runs from 0 to n for rows. Inner loop runs from 0 to i (current row index), so row i prints (i+1) stars.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
