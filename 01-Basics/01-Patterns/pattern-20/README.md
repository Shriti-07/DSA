# Pattern 20: Hollow Diamond (Sandglass) Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
*      *
**    **
***  ***
********
***  ***
**    **
*      *
```

## Approach
Basically the Butterfly (Pattern 19) mirrored left-to-right — leading spaces shrink then grow instead of the stars-first layout, giving a diamond made of two hollow triangles.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
