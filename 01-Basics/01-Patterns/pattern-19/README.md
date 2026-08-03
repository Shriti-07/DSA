# Pattern 19: Butterfly Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
```

## Approach
Split into two halves. Top half: for row i, print (n-i) stars, then 2*i spaces, then (n-i) stars again. Bottom half mirrors it by looping i backwards.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
