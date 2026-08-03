# Problem 4: GCD (HCF) of Two Numbers

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Basic Maths

## Problem
Given two integers n1 and n2, find their Greatest Common Divisor.

## Example
```
Input: n1 = 20, n2 = 28
Output: 4
```

## Approach
The Euclidean algorithm: repeatedly replace `(n1, n2)` with `(n2, n1 % n2)` until `n2` becomes 0 — at that point `n1` holds the GCD. This converges far faster than checking every number down from min(n1, n2), or the repeated-subtraction version.

> **Note:** You had two other approaches commented out: (1) checking every number from min(n1,n2) down to 1 — O(min(n1,n2)), the slowest; (2) repeated subtraction (Euclidean subtraction method) — correct but still slower than the modulo version, which is what's used here as the final approach.

## Complexity
- **Time Complexity:** O(log(min(n1, n2)))
- **Space Complexity:** O(1)
