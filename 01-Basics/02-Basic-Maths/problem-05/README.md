# Problem 5: Check Armstrong Number

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
An Armstrong number is a number that equals the sum of its own digits, each raised to the power of the total digit count. Given n, check if it's an Armstrong number.

## Example
```
Input: n = 153
Output: true
Explanation: 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
```

## Approach
First find the digit count `s` using `log10(n) + 1` (same trick as Count Digits). Then extract each digit one at a time via `% 10` and `/ 10`, raising it to the power `s` with `pow()` and adding it to a running sum. Finally compare the sum to the original number.

## Complexity
- **Time Complexity:** O(log₁₀ n)
- **Space Complexity:** O(1)
