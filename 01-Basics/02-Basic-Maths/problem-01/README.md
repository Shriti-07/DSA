# Problem 1: Count Digits in a Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
Given an integer x, count the number of digits in it.

## Example
```
Input: x = 12345
Output: 5
```

## Approach
Optimal: `log10(x)` gives (digit count - 1) for a positive number, so `1 + log10(x)` gives the digit count directly — avoids looping entirely. Handle `x == 0` as a special case (1 digit) since log10(0) is undefined, and take `abs(x)` first so negative numbers work too.

A simpler brute-force alternative: keep dividing by 10 until it becomes 0, counting each division — included below as a fallback since it's easier to reason about.

## Complexity
- **Time Complexity:** O(1) optimal / O(log₁₀ n) brute force
- **Space Complexity:** O(1)
