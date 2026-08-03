# Problem 7: Check Prime Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
Given an integer n, determine whether it is a prime number.

## Example
```
Input: n = 11
Output: true

Input: n = 15
Output: false
```

## Approach
Only need to check for divisors up to `sqrt(n)` — if no number in that range divides `n`, it's prime. The version below counts every divisor found and checks the count equals 1; a slightly faster variant (also included) exits the loop the moment any divisor is found, since a single divisor besides 1 is enough to disqualify a number as prime.

> **Note:** Both give the same answer, but the second one returns immediately on finding a divisor instead of scanning the full range every time — noticeably faster in practice even though the Big-O is the same.

## Complexity
- **Time Complexity:** O(√n) both versions
- **Space Complexity:** O(1)
