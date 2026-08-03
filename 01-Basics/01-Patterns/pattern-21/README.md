# Pattern 21: Hollow Square with Solid Border Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
****
*  *
*  *
****
```

## Approach
Print a star if we're on the first row, last row, first column, or last column — otherwise print a space. This hollows out everything except the border.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
