# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`. Your task is to find if it is a palindrome.

 **Examples:** 

```
Input: n = 555
Output: true
Explanation: The number 555 reads the same backward as forward, so it is a palindrome.
```

```
Input: n = 123
Output: false
Explanation: The number 123 reads differently backward (321), so it is not a palindrome.
```

```
Input: n = -121
Output: true
Explanation: if number is palindrome, mainly ignore sign.
```

 **Constraints:** 
-109 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T18:56:21.515Z  

```cpp
class Solution {
  public:
    bool isPalindrome(int n) {
        int num = abs(n);
        int original = num;
        int reverse = 0;

        while (num > 0) {
            int digit = num % 10;
            reverse = reverse * 10 + digit;
            num /= 10;
        }

        return original == reverse;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/palindrome0746/1)