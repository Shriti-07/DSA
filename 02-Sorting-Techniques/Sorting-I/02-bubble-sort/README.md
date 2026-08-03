# Bubble Sort

**Source:** Striver's A2Z DSA Sheet — Learn Important Sorting Techniques → Sorting-I

## Problem
Given an array nums, sort it in ascending order using Bubble Sort.

## Example
```
Input: nums = [5, 1, 4, 2, 8]
Output: [1, 2, 4, 5, 8]
```

## Approach
Repeatedly step through the array, swapping adjacent elements if they're in the wrong order. Each full pass 'bubbles' the largest remaining unsorted element to its correct position at the end, so the inner loop shrinks by one each time.

> **Note:** A common optimization: add a `swapped` flag that breaks out early if a full pass makes zero swaps (means the array's already sorted). Not included here since your version is the plain textbook one — add it if you want the O(n) best case.

## Complexity
- **Time Complexity:** O(n²) worst/average, O(n) best (with early-exit optimization — not used here)
- **Space Complexity:** O(1)
