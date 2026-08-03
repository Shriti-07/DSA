# Pattern 9: Diamond Pattern

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
   *
  ***
 ***** 
*******
*******
 ***** 
  ***
   *
```

## Approach
A diamond is just a Pyramid stacked directly on top of an Inverted Pyramid — print the upper half growing outward, then the lower half shrinking back in.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
