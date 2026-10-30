# Power of 2

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a non-negative integer  **n**, return true if it is a power of  **2**. Otherwise, return false.  

**Examples:
**

```
Input: n = 8
Output: true
Explanation: 8 is equal to 2 raised to 3 (23 = 8).
```

```
Input: n = 98
Output: false
Explanation: 98 cannot be obtained by any power of 2.
```

```
Input: n = 1
Output: true
Explanation: 1 is equal to 2 raised to 0 (20 = 1).
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T03:48:17.087Z  

```cpp
class Solution {
public:
    bool isPowerofTwo(int n) {
        // Powers of 2 must be strictly greater than 0
        if (n <= 0) return false;

        // Bitwise trick: n & (n - 1) removes the lowest set bit
        return (n & (n - 1)) == 0;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1)