# Zero Sum Subarrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an array  **arr[]**  of integers. Find the total count of subarrays with their sum equal to 0.

 **Examples:** 

```
Input: arr[] = [0, 0, 5, 5, 0, 0]
Output: 6
Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].
```

```
Input: arr[] = [6, -1, -3, 4, -2, 2, 4, 6, -12, -7]
Output: 4
Explanation: The 4 subarrays are [-1, -3, 4], [-2, 2], [2, 4, 6, -12], 
and [-1, -3, 4, -2, 2]

```

```
Input: arr[] = [0]
Output: 1
Explanation: The only subarray is [0].
```

 **Constraints:** 
1 <= n <= 106
-109 <= arr[ i ] <= 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:27:52.360Z  

```cpp
#include <vector>
#include <unordered_map>

class Solution {
public:
    int findSubarray(std::vector<int> &arr) {
        std::unordered_map<long long, int> prefixMap;
        long long current_sum = 0;
        int count = 0;

        for (int num : arr) {
            current_sum += num;

            // If prefix sum is 0, we found a subarray starting from index 0
            if (current_sum == 0) {
                count++;
            }

            // If prefix sum has been seen before, add its frequency
            if (prefixMap.find(current_sum) != prefixMap.end()) {
                count += prefixMap[current_sum];
            }

            // Store/update the frequency of current prefix sum
            prefixMap[current_sum]++;
        }

        return count;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1)