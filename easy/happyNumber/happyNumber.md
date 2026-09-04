# [Problem #202] — Happy Number

**Difficulty:** Easy   
**Link:** [Happy Number](https://leetcode.com/problems/happy-number/description/)  
**Tags:** `array` `hash-map` `two-pointers`  

---

## Problem

Determine if given integer n is a happy number.
a happy number is found by the following process:
1. Take the sum of n's digits.
2. Repeat, until they equal 1.
3. If the sum is ever equal to a previous sum then it is not a happy number.

---

**Constraints:**
- 1 <= n <= 2<sup>31</sup> - 1

---

**Example:**  
<b>input:</b> n = 19  
<b>output: </b> true  
<b>Explanation: </b>  
1<sup>2</sup> + 9<sup>2</sup> = 82  
8<sup>2</sup> + 2<sup>2</sup> = 68  
6<sup>2</sup> + 8<sup>2</sup> = 100  
1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1  

---

## Approach

We have two main steps--we have to first figure out a way to square the digits, then we must determine if it ends at 1 or a loop. The easiest way to accomplish this is to use recursion.

For the first part:  

1. Apply (n % 10) and store it into a variable. (n % 10) reveals the value in the ones place.
2. Do this across each numeric place by repeatedly dividing the number by 10 until it gets to 0  
(which it will, because the '/' symbol is floor division in C++) 

For the second part:  

3. Define a hashmap preceding the function  
4. In each iteration,  
    5. check if the sum is equal to 1, and it if it is, return true  
    6. check if the sum is in the hashmap, and if it is, return false  
    7. add the value of the sum to the hashmap

**Why it works:**  
it works because the hashmap check ensures that loops are caught and returned appropriately, while shifting (n % 10) across all number places allows for easy calculation of the sum of the squared digits.

---

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |

---


## Edge Cases

None for this problem--it either returns 1 or 0, regardless of what numeric input is inputted. 

---

## Notes / Alternative Approaches

- Two Pointers approach: Instead of using a hashmap, a slow+fast pointer approach works too. Essentially, a slow pointer incrementing 1 at a time can only catch up to a fast pointer incrementing two at a time if the linked list loops, which correctly identifies the false case.