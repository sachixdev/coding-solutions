# Pair With Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  and an integer  **x**, return true if there exists a pair of elements in the array whose absolute difference is  **x**, otherwise, return false.

 **Examples:** 

```
Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78
Output: true
Explanation: Pair (2, 80) have an absolute difference of 78.
```

```
Input: arr[] = [90, 70, 20, 80, 50], x = 45
Output: false
Explanation: There is no pair with absolute difference of 45.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:23:29.151Z  

```cpp
#include <vector>
#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool findPair(std::vector<int> &arr, int x) {
        std::unordered_set<int> seen;

        for (int num : arr) {
            // Check if there is an element such that |num - element| = x
            if (seen.count(num + x) || seen.count(num - x)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1)