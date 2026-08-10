# Insertion Sort

**Source:** Striver's A2Z DSA Sheet — Learn Important Sorting Techniques → Sorting-I
**Status:** solved

## Problem
Given an array nums, sort it in ascending order using Insertion Sort.

## Example
```
Input: nums = [12, 11, 13, 5, 6]
Output: [5, 6, 11, 12, 13]
```

## Approach
For every position i starting from index 1, compare the current element with its previous elements and repeatedly swap backward as long as the previous element is greater. This places the current element in its correct position within the sorted prefix.

## Complexity
- **Time Complexity:** Worst & Average Case: O(n^2) Best Case: O(n)
- **Space Complexity:** 0(1)
