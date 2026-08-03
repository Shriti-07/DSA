# Pattern 18: Alphabet Reverse-Order Triangle Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
D
CD
BCD
ABCD
```

## Approach
For row i, start from the letter ('A' + n - 1 - i) and print up to 'Z' so later rows begin further back in the alphabet, ending at the same last letter.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
