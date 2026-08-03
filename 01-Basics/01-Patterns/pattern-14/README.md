# Pattern 14: Alphabet Right Triangle Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
A
AB
ABC
ABCD
```

## Approach
Use a char loop variable starting at 'A' and going up to 'A' + i for row i, printing consecutive letters of the alphabet.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
