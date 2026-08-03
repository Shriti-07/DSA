# Problem 3: Check Palindrome String

**Source:** Striver's A2Z DSA Sheet — Step 1 (Basics) → Recursion

## Problem
Given a string s, determine whether it reads the same forwards and backwards (case-insensitive).

## Example
```
Input: s = "Madam"
Output: true
```

## Approach
Use two pointers, one starting at each end of the string. Move them toward each other, comparing characters (lowercased, so it's case-insensitive) at each step. If any pair doesn't match, it's not a palindrome; if the pointers meet without a mismatch, it is.

> **Note:** This version is actually iterative (a while loop), not recursive — it's correct and this is the standard efficient way to check a palindrome, but since this folder is about recursion, here's the recursive equivalent if you want it:
```cpp
class SolutionRecursive {
public:
    bool palindromeCheck(const string& s, int left, int right) {
        if (left >= right) {
            return true;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        return palindromeCheck(s, left + 1, right - 1);
    }
};
```

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
