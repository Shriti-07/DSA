# Pattern 16: Alphabet Triangle with Repeated Row Letter

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
A
BB
CCC
DDDD
```

## Approach
For row i, compute the letter once as 'A' + i, then print that same letter (i + 1) times.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
