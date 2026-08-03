# Pattern 3: Right Triangle with Numbers (1 to i)

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Pattern Problems

## Problem
Given an integer `n`, print the following pattern.

## Example
Input: `n = 4`
```
1
12
123
1234
```

## Approach
Same structure as Pattern 2, but instead of printing '*', print the column value j, which naturally counts 1 to (i+1) in each row.

## Complexity
- **Time Complexity:** O(n^2)
- **Space Complexity:** O(1)
