# [Problem #1] — Two Sum

**Difficulty:** Easy   
**Link:** [Two Sum](https://leetcode.com/problems/two-sum/description/)  
**Tags:** `array` `hash-table`  

---

## Problem

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to `target`.

---

## Approach

data structure used: hashtable

explanation: to find the correct combination, we need to be able to check if a variable and its complement sum to a target. This is because it only takes O[1] time to tell if a particular value is inside of a hash table.

Pseudocode (starting after the function definition):

1. For each value inside of nums:  
    2. Find the complement (target - value)  
    3. Check if the complement is inside the hashtable  
        4. If it is, return indices of value and complement  
        5. Else, add current value to the hashtable  
6. Return nothing [included as an edge case]

---

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(n) |

---

## Edge Cases

- No pair sums to target — falls through to the "return nothing" case.

---

## Notes / Alternative Approaches

