# Recursive Insertion Sort

**Source:** Striver's A2Z DSA Sheet — Learn Important Sorting Techniques → Sorting-II
**Status:** Not yet solved

## Problem
Given an array nums, sort it in ascending order using a recursive version of Insertion Sort.

## Example
```
Input: nums = [12, 11, 13, 5, 6]
Output: [5, 6, 11, 12, 13]
```

## Approach
Recursively sort the first n-1 elements of the array. Once the prefix is sorted, store the last element (at index n-1) and shift all larger elements in the sorted prefix one position to the right to clear a spot, then insert the stored element into its correct sorted position.

## Complexity
- **Time Complexity:** O(n²) - in the worst and average cases, as inserting the nth element requires shifting up to n-1 elements.
- **Space Complexity:** O(n) - due to the recursive call stack space, which reaches a maximum depth of n.

