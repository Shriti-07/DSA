# Quick Sort

**Source:** Striver's A2Z DSA Sheet — Learn Important Sorting Techniques → Sorting-II
**Status:** Not yet solved

## Problem
Given an array nums, sort it in ascending order using Quick Sort.

## Example
```
Input: nums = [10, 7, 8, 9, 1, 5]
Output: [1, 5, 7, 8, 9, 10]
```

## Approach
Select the first element as the pivot, then use two pointers moving from opposite ends to partition the array, swapping elements until all values smaller than or equal to the pivot are on its left and larger values are on its right. Once the pointers cross, place the pivot at its correct sorted position and recursively repeat the process for the left and right subarrays.

## Complexity
- **Time Complexity:** O(n²) in the worst case (when the array is already sorted or reverse sorted), and O(n log n) on average, as the array is divided based on the pivot's position.
- **Space Complexity:** O(n) in the worst-case recursive call stack depth, and O(log n) on average.

