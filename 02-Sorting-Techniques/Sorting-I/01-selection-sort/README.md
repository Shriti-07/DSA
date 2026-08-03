# Selection Sort

**Source:** Striver's A2Z DSA Sheet — Learn Important Sorting Techniques → Sorting-I

## Problem
Given an array nums, sort it in ascending order using Selection Sort.

## Example
```
Input: nums = [64, 25, 12, 22, 11]
Output: [11, 12, 22, 25, 64]
```

## Approach
For every position i, scan the rest of the unsorted array to find the index of the smallest remaining element, then swap it into position i. This grows the sorted prefix by one element each pass.

## Complexity
- **Time Complexity:** O(n²) — always, regardless of input order
- **Space Complexity:** O(1)
