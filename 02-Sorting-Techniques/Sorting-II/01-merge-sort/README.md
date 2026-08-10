# Merge Sort

**Source:** Striver's A2Z DSA Sheet — Learn Important Sorting Techniques → Sorting-II
**Status:** Solved

## Problem
Given an array nums, sort it in ascending order using Merge Sort.

## Example
```
Input: nums = [38, 27, 43, 3, 9, 82, 10]
Output: [3, 9, 10, 27, 38, 43, 82]
```

## Approach
Recursively divide the array into two halves until single-element subarrays are reached, then merge them back together in a sorted manner using a temporary array. During the merge step, two pointers compare elements from each half and place the smaller element into the temporary array, which is then copied back into the original array.

## Complexity
- **Time Complexity:** O(n log n) - always, as the array is split in half at each step (log n levels) and merging takes O(n) time at each level.
- **Space Complexity:** O(n) - due to the temporary array used during the merge process and the O(log n) recursive call stack space.