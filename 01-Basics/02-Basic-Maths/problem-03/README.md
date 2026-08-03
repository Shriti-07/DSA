# Problem 3: Check Palindrome Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
Given an integer n, determine whether it reads the same forwards and backwards.

## Example
```
Input: n = 121
Output: true

Input: n = -121
Output: false
```

## Approach
Negative numbers can never be palindromes (the `-` sign only appears at the front), so return false immediately if `n < 0`. Otherwise, reverse the number the same way as in Reverse a Number, then compare the reversed value to the original.

> **Note:** An alternative approach: convert to string with `to_string(n)`, reverse the string, and compare — simpler to read but uses O(log₁₀ n) extra space for the string, versus O(1) for the digit-by-digit version above.

## Complexity
- **Time Complexity:** O(log₁₀ n)
- **Space Complexity:** O(1)
