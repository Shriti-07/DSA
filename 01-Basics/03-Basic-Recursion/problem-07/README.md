# Problem 7: Print Numbers from 1 to N

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given n, print all numbers from 1 up to n using recursion.

## Example
```
Input: n = 5
Output: 1 2 3 4 5
```

## Approach
Recurse down to (n - 1) *before* printing. Since the print happens after the recursive call returns, the smallest numbers get printed first as the call stack unwinds.

> **Note:** Compare this with Problem 6 — same base case and recursive call, but moving the `cout` line before vs. after the recursive call completely flips the print order. Good one to keep in mind as a general recursion pattern.

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) — recursion stack depth
