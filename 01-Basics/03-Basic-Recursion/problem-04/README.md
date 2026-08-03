# Problem 4: Reverse an Array (Recursion)

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given an array arr of size n, reverse it in place using recursion.

## Example
```
Input: arr = [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]
```

## Approach
Swap the first and last elements, then recurse on the subarray with both ends moved one step inward — shift the start pointer forward by 1 and shrink the count by 2. Base case: stop once there's nothing left to swap (n <= 0).

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) — recursion stack depth
