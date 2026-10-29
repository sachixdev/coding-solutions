# K-th of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]** and  **b[]**  and an element  **k**, find the element that would be at the  **kth**  position of the combined sorted array.

 **Examples :** 

```
Input: a[] = [2, 3, 6, 7, 9], b[] = [1, 4, 8, 10], k = 5
Output: 6
Explanation: The final combined sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.

```

```
Input: a[] = [1, 4, 8, 10, 12], b[] = [5, 7, 11, 15, 17], k = 6
Output: 10
Explanation: Combined sorted array is [1, 4, 5, 7, 8, 10, 11, 12, 15, 17]. The 6th element of this array is 10.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:34:34.682Z  

```cpp
#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int kthElement(std::vector<int>& a, std::vector<int>& b, int k) {
        int n = a.size();
        int m = b.size();

        // Ensure array 'a' is the smaller array to minimize binary search range
        if (n > m) {
            return kthElement(b, a, k);
        }

        // Search boundaries for picking elements from 'a'
        int low = std::max(0, k - m);
        int high = std::min(k, n);

        while (low <= high) {
            int cut1 = low + (high - low) / 2;
            int cut2 = k - cut1;

            int left1 = (cut1 == 0) ? INT_MIN : a[cut1 - 1];
            int left2 = (cut2 == 0) ? INT_MIN : b[cut2 - 1];

            int right1 = (cut1 == n) ? INT_MAX : a[cut1];
            int right2 = (cut2 == m) ? INT_MAX : b[cut2];

            // Valid partition found
            if (left1 <= right2 && left2 <= right1) {
                return std::max(left1, left2);
            }
            // Move left in array 'a'
            else if (left1 > right2) {
                high = cut1 - 1;
            }
            // Move right in array 'a'
            else {
                low = cut1 + 1;
            }
        }

        return -1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1)