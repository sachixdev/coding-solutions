# Missing And Repeating

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an unsorted array  **arr[]** of size  **n**, containing elements from the range  **1** to **n**, it is known that one number in this range is missing, and another number occurs twice in the array, find the both numbers.

**Examples:
**

```
Input: arr[] = [2, 2]
Output: [2, 1]
Explanation: Repeating number is 2 and the missing number is 1.
```

```
Input: arr[] = [1, 3, 3] 
Output: [3, 2]
Explanation: Repeating number is 3 and the missing number is 2.
```

```
Input: arr[] = [4, 3, 6, 2, 1, 1]
Output: [1, 5]
Explanation: Repeating number is 1 and the missing number is 5.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:17:28.986Z  

```cpp
#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> findTwoElement(std::vector<int>& arr) {
        int n = arr.size();
        int repeating = -1;
        int missing = -1;

        // Step 1: Find the repeating number by marking indices as negative
        for (int i = 0; i < n; i++) {
            int val = std::abs(arr[i]);
            if (arr[val - 1] < 0) {
                repeating = val;
            } else {
                arr[val - 1] = -arr[val - 1];
            }
        }

        // Step 2: Find the missing number (the index that remains positive)
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {repeating, missing};
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1)