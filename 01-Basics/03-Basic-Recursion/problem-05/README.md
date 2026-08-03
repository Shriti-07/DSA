# Problem 5: Sum of First N Numbers (Recursion)

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given n, find the sum of all integers from 1 to n using recursion.

## Example
```
Input: n = 5
Output: 15
Explanation: 1 + 2 + 3 + 4 + 5 = 15
```

## Approach
Base case: sum of 0 numbers is 0. Otherwise, the sum up to n is n plus the sum up to (n - 1).

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) — recursion stack depth
