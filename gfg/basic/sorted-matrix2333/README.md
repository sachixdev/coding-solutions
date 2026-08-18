# Sort a Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an n*n matrix  **mat[][]**. returns the matrix with all elements sorted in non-decreasing order.

 **Examples:** 

```
Input: mat[][] = [[10, 20, 30, 40],
                [15, 25, 35, 45], 
                [27, 29, 37, 48],
                [32, 33, 39, 50]]
Output:
       [[10, 15, 20, 25], 
       [27, 29, 30, 32],
       [33, 35, 37, 39],
       [40, 45, 48, 50]]
Explanation:
Sorting the matrix gives this result.
```

```
Input: mat[][] = [[1, 5, 3],
                [2, 8, 7],
                [4, 6, 9]]
Output:
       [[1, 2, 3], 
       [4, 5, 6],
       [7, 8, 9]]
Explanation:
Sorting the matrix gives this result.
```

 **Constraints:** 
1 ≤ n ≤ 1000
1 ≤ mat[i][j] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T10:18:41.569Z  

```cpp
class Solution {
  public:
    vector<vector<int>> sortedMatrix(vector<vector<int>> mat) {

        int n = mat.size();
        vector<int> v;

        // Store all elements in a vector
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                v.push_back(mat[i][j]);
            }
        }

        // Sort the vector
        sort(v.begin(), v.end());

        // Fill back into matrix
        int k = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                mat[i][j] = v[k++];
            }
        }

        return mat;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1)