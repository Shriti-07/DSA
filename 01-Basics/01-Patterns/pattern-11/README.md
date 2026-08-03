# Pattern 11: Binary Number Triangle Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
1
01
101
0101
```

## Approach
Track a toggling value 'start' that alternates between 1 and 0. At the beginning of every row, reset 'start' based on whether the row index is even or odd, then flip it after printing each digit.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
