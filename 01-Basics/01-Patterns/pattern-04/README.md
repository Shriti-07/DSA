# Pattern 4: Right Triangle with Repeated Row Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
1
22
333
4444
```

## Approach
Same loop structure, but this time print the row number i (not the column j) in every inner iteration, so the whole row is filled with the same digit.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
