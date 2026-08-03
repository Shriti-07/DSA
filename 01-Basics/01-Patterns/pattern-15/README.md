# Pattern 15: Alphabet Reverse Right Triangle Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
ABCD
ABC
AB
A
```

## Approach
For row i, print letters from 'A' up to 'A' + (n - i - 1), so the row shrinks by one letter as i increases.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
