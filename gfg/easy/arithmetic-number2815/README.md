# Arithmetic Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given three integers  ' **a** ' denotes the first term of an arithmetic sequence, ' **c** ' denotes the common difference of an arithmetic sequence and an integer ' **b** '. you need to tell whether 'b' exists in the arithmetic sequence or not.

 **Examples:** 

```
Input: a = 1, b = 3, c = 2
Output: true
Explanation: 3 is the second term of the sequence starting with 1 and having a common difference 2.
```

```
Input: a = 1, b = 2, c = 3
Output: false
Explanation: 2 is not present in the sequence.

```

```
Input: a = 1, b = 2, c = 4
Output: false
Explanation: 2 is not present in the sequence.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:39:05.810Z  

```cpp
class Solution {
public:
    int inSequence(int a, int b, int c) {
        if (c == 0) {
            return a == b;
        }

        // Check if b lies in the direction of common difference c
        // and (b - a) is a multiple of c
        if ((b - a) % c == 0 && (b - a) / c >= 0) {
            return 1;
        }

        return 0;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1)