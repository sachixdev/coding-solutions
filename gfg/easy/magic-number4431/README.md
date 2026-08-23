# Magic Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer  **n**, find the nth  **magic**  number. A magic number is a positive integer that can be represented as the sum of distinct powers of 5. In other words, every power of 5 can be used at most once in the representation.

For example:

- 5 = 51
- 25 = 52
- 30 = 51 + 52

When all magic numbers are arranged in  **increasing**  order, return the nth magic number.

 **Examples:** 

```
Input: n = 1
Output: 5
Explanation: The magic numbers in increasing order begin as: 5, 25, 30, 125,...
The 1st magic number is 5.
```

```
Input: n = 2
Output: 25
Explanation: The magic numbers in increasing order begin as: 5, 25, 30, 125,...
The 2nd magic number is 25.
```

 **Constraints:** 
1 ≤ n ≤ 103

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T19:14:56.966Z  

```cpp
class Solution {
  public:
    int nthMagicNo(int n) {
        int ans = 0;
        int power = 5;

        while (n > 0) {
            if (n & 1)
                ans += power;

            power *= 5;
            n >>= 1;
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/magic-number4431/1)