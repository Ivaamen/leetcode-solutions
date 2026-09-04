# [Problem #26] — Remove Duplicates from Sorted Array

**Difficulty:** Easy   
**Link:** [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)  
**Tags:** `array` `two-pointers`  

---

## Problem

Given a sorted array `nums`, remove the duplicates in-place such that each unique element appears only once, and return the count `k` of unique elements. The first `k` elements of `nums` should hold the final result.

---

## Approach

algorithm: two pointers

explanation: Two things matter about what this problem actually asks: the checker only looks at the array up to length k, and we don't need to return the full array. That's why a hashmap is overkill — it answers "have I seen this value before" in O(n) space, a more general question than we need. We only need "is this value the same as the one before it", which is an O(1) space question and points straight at two pointers.

Slow pointer i tracks the last unique value's position; fast pointer j scans ahead. Whenever nums[j] differs from nums[i], we've found a new unique value: increment i and overwrite nums[i] with nums[j]. j always increments.

Pseudocode:

1. Initialize i, j pointers  
2. While i and j pointers are less than the list length:  
    3. Are the values of nums at i and j different?  
        4. If yes, increment i, and set i's value equal to the unique value of j.  
    5. Increment j

---

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |

---

## Edge Cases

- Array with only one element — loop still runs, no duplicates to remove.

---

## Notes / Alternative Approaches

- Hashmap approach: works but is a worse fit here — it answers "have I seen this value before" in O(n) time, a more general question than needed, when the two-pointer approach answers the narrower "is this the same as the previous value" question in O(1) space.
