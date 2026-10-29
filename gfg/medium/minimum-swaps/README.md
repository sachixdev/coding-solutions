# Minimum Swaps to Sort

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  of distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.

 **Examples:** 

```
Input: arr[] = [2, 8, 5, 4]
Output: 1
Explanation: Swap 8 with 4 to get the sorted array.
```

```
Input: arr[] = [10, 19, 6, 3, 5]
Output: 2
Explanation: Swap 10 with 3 and 19 with 5 to get the sorted array.

```

```
Input: arr[] = [1, 3, 4, 5, 6]
Output: 0
Explanation: Input array is already sorted.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T04:32:04.750Z  

```cpp
class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> vec(n);

        // Store element and its original index
        for (int i = 0; i < n; i++) {
            vec[i] = {arr[i], i};
        }

        // Sort elements by value
        sort(vec.begin(), vec.end());

        vector<bool> visited(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            // Skip if already visited or already in the correct position
            if (visited[i] || vec[i].second == i) {
                continue;
            }

            // Count the size of the cycle
            int cycle_size = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = vec[j].second;
                cycle_size++;
            }

            // Add (cycle_size - 1) swaps to answer
            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/minimum-swaps/1)