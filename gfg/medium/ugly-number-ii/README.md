# Ugly Number II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer  **n**,  return the nth ugly number. An ugly number is a positive integer whose prime factors are limited to 2, 3 and 5.

 **Examples:** 

```
Input: n = 5
Output: 5
Explanation: Ugly Numbers - 1, 2, 3, 4, 5, 6, 8, 9, 10, 12. So, 5th Ugly Number is 5
```

```
Input: n = 10
Output: 12
Explanation: 10th Ugly Number is 12
```

 **Constraints:** 
1 ≤ n ≤ 1500

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T19:00:06.263Z  

```cpp

class Solution {
  public:
    int uglyNumber(int n) {
        vector<long long> ugly(n);

        ugly[0] = 1;

        int i2 = 0, i3 = 0, i5 = 0;

        for (int i = 1; i < n; i++) {
            long long nextUgly = min({ugly[i2] * 2,
                                      ugly[i3] * 3,
                                      ugly[i5] * 5});

            ugly[i] = nextUgly;

            if (nextUgly == ugly[i2] * 2) i2++;
            if (nextUgly == ugly[i3] * 3) i3++;
            if (nextUgly == ugly[i5] * 5) i5++;
        }

        return ugly[n - 1];
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/ugly-number-ii/1)