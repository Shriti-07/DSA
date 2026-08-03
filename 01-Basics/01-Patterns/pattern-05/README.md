# Pattern 5: Inverted Right Triangle Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
****
***
**
*
```

## Approach
Outer loop runs from 0 to n. Inner loop prints (n - i) stars, so the count of stars decreases as we move down the rows.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
