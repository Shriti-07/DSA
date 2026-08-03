# Problem 2: Reverse a Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
Given an integer n, reverse its digits and return the reversed number.

## Example
```
Input: n = 1234
Output: 4321
```

## Approach
Repeatedly extract the last digit with `n % 10`, build up the reversed number as `rev = rev * 10 + digit`, then strip the last digit off `n` with `n / 10`. Keep going until `n` becomes 0.

> **Note:** Your original snippet computed `rev` correctly but never returned it — the last line was `if(rev==n)` with no `return` statement after it, so the function fell off the end without returning a value on the success path. Fixed here to just `return rev;` directly (dropped the negative-number check since a reversed negative number isn't really meaningful without extra handling — flag if you want that added back).

## Complexity
- **Time Complexity:** O(log₁₀ n)
- **Space Complexity:** O(1)
