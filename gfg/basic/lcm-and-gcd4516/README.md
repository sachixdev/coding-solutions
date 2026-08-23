# LCM And GCD

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two integers a and b, You have to compute their LCM and GCD and return an array containing their LCM and GCD.

 **Examples:** 

```
Input: a = 5, b = 10
Output: [10, 5]
Explanation: LCM of 5 and 10 is 10, while their GCD is 5.
```

```
Input: a = 14, b = 8
Output: [56, 2]
Explanation: LCM of 14 and 8 is 56, while their GCD is 2.

```

```
Input: a = 1, b = 1
Output: [1, 1]
Explanation: LCM of 1 and 1 is 1, while their GCD is 1.
```

 **Constraints:** 
1 ≤ a, b ≤ 104

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T18:41:24.599Z  

```cpp
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int x = a, y = b;

        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }

        int gcd = x;
        int lcm = (a * b) / gcd;

        return {lcm, gcd};
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1)