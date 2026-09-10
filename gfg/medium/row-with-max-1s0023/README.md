# Row with Max 1s in Rowwise Sorted

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a 2D binary array  **arr[][]**  of size  **n*m**  consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. Find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1.

 **Note:** The array follows 0-based indexing.

 **Examples:** 

```
Input: arr[][] = [[0,1,1,1], [0,0,1,1], [1,1,1,1]]
Output: 2
Explanation: Row 2 contains the most number of 1s (4 - 1s). Hence, the output is 2.
```

```
Input: arr[][] = [[0,0], [1,1]]
Output: 1
Explanation: Row 1 contains the most number of 1s (2 - 1s). Hence, the output is 1.
```

```
Input: arr[][] = [[0,0], [0,0]]
Output: -1
Explanation: No row contains any 1s, so the output is -1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T04:50:49.476Z  

```cpp
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {

        int n = arr.size();
        int m = arr[0].size();

        int maxOnes = 0;
        int ans = -1;

        for(int i = 0; i < n; i++) {

            auto it = lower_bound(arr[i].begin(), arr[i].end(), 1);

            int ones = m - (it - arr[i].begin());

            if(ones > maxOnes) {
                maxOnes = ones;
                ans = i;
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1)