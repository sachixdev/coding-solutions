# Disarium Number

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number **n**, find if it is Disarium or not.

A number is called a Disarium number if the sum of its digits raised to the power of their respective positions is equal to the number itself.

 **Examples:** 

```
Input: 89
Output: true
Explanation: 81 + 92 = 8 + 81 = 89, which is equal to n. Therefore, 89 is a Disarium Number, so output is true.
```

```
Input: 81
Output: false
Explanation: 81 + 12 = 8 + 1 = 9, which is not equal to n. Therefore, 81 is not a Disarium Number, so output is false.
```

 **Constraints:** 
0 <= n <= 108

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T16:42:27.742Z  

```cpp
class Solution {
  public:
    bool isDisarium(int n) {
        string s = to_string(n);
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';
            sum += pow(digit, i + 1);
        }

        return sum == n;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/disarium-number1045/1)