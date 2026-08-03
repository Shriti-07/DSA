# Problem 6: Print Numbers from N to 1

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given n, print all numbers from n down to 1 using recursion.

## Example
```
Input: n = 5
Output: 5 4 3 2 1
```

## Approach
Print the current value of n first, then recurse with (n - 1). Since the print happens before the recursive call, numbers come out largest to smallest.

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) — recursion stack depth
