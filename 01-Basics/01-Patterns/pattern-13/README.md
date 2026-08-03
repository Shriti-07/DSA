# Pattern 13: Continuous Number Triangle Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
1
2  3
4  5  6
7  8  9  10
```

## Approach
Keep a single counter variable that starts at 1 and only increments — never resets between rows — so numbers keep counting up across the whole triangle.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
