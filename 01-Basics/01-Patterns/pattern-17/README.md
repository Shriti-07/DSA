# Pattern 17: Alphabet Palindromic Pyramid Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
  A
 ABA
ABCBA
```

## Approach
Print (n - i - 1) leading spaces to center the row, then letters ascending from 'A' to 'A'+i, then letters descending back down to 'A' (skipping the peak letter so it isn't repeated).

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
