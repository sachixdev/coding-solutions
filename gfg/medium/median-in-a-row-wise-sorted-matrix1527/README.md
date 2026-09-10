# Median in a Row-Wise Sorted Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a row-wise sorted matrix  **mat[][]**  of size  **n x m**, where the number of rows and columns is always  **odd**. Return the  **median**  of the matrix.

 **Examples:** 

```
Input: mat[][] = [[1, 3, 5], [2, 6, 9], [3, 6, 9]]
Output: 5
Explanation: Sorting matrix elements gives us [1, 2, 3, 3, 5, 6, 6, 9, 9]. Hence, 5 is median.

```

```
Input: mat[][] = [[2, 4, 9], [3, 6, 7], [4, 7, 10]]
Output: 6
Explanation: Sorting matrix elements gives us [2, 3, 4, 4, 6, 7, 7, 9, 10]. Hence, 6 is median.
```

```
Input: mat = [[3], [4], [8]]
Output: 4
Explanation: Sorting matrix elements gives us [3, 4, 8]. Hence, 4 is median.

```

 **Constraints:** 
1 ≤ n, m ≤ 400
1 ≤ mat[i][j] ≤ 2000

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T04:49:30.577Z  

```cpp
class Solution {
  public:
    int median(vector<vector<int>> &mat) {

        int n = mat.size();
        int m = mat[0].size();

        int low = 1;
        int high = 2000;

        int desired = (n * m + 1) / 2;

        while (low < high) {

            int mid = low + (high - low) / 2;

            int count = 0;

            for (int i = 0; i < n; i++) {
                count += upper_bound(mat[i].begin(),
                                     mat[i].end(),
                                     mid) - mat[i].begin();
            }

            if (count < desired)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1)