# Count Set Bits in 1 to n

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a number **n**. Return the total count of set bits for all numbers from 1 to n (both inclusive).

**Examples :
**

```
Input: n = 4
Output: 5
Explanation: For numbers from 1 to 4. for 1: 0 0 1 => 1 set bit, for 2: 0 1 0 => 1 set bit, for 3: 0 1 1 => 2 set bits, for 4: 1 0 0 => 1 set bit. Therefore, the total set bits are 5.

```

```
Input: n = 17
Output: 35
Explanation: From numbers 1 to 17(both inclusive), the total number of set bits are 35.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T10:32:40.003Z  

```cpp
class Solution {
public:

    int largestPower(int n) {
        int x = 0;

        while ((1 << (x + 1)) <= n)
            x++;

        return x;
    }

    int countSetBits(int n) {

        if (n == 0)
            return 0;

        int x = largestPower(n);

        int bitsTill2x = x * (1 << (x - 1));

        int msbBits = n - (1 << x) + 1;

        int remaining = n - (1 << x);

        return bitsTill2x + msbBits + countSetBits(remaining);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1)