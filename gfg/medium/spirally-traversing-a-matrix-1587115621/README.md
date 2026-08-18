# Spirally Traversing a Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a rectangular matrix  **mat[][]**  of size  **n x m**, and return a 1D array containing all its elements in  **spiral** order.

 **Examples:** 

```
Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
Explanation: 

```

```
Input: mat[][] = [[1, 2, 3, 4, 5, 6], [7, 8, 9, 10, 11, 12], [13, 14, 15, 16, 17, 18]]
Output: [1, 2, 3, 4, 5, 6, 12, 18, 17, 16, 15, 14, 13, 7, 8, 9, 10, 11]
Explanation: Applying same technique as shown above.
```

```
Input: mat[][] = [[32, 44, 27, 23], [54, 28, 50, 62]]
Output: [32, 44, 27, 23, 62, 50, 28, 54]
Explanation: Applying same technique as shown above, output will be [32, 44, 27, 23, 62, 50, 28, 54].
```

 **Constraints:** 
1 ≤ n, m ≤1000
0 ≤ mat[i][j] ≤100

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T10:22:06.576Z  

```cpp
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {

        vector<int> ans;

        int n = mat.size();
        int m = mat[0].size();

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = m - 1;

        while(top <= bottom && left <= right)
        {
            // Left to Right
            for(int i = left; i <= right; i++)
            {
                ans.push_back(mat[top][i]);
            }
            top++;

            // Top to Bottom
            for(int i = top; i <= bottom; i++)
            {
                ans.push_back(mat[i][right]);
            }
            right--;

            // Right to Left
            if(top <= bottom)
            {
                for(int i = right; i >= left; i--)
                {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }

            // Bottom to Top
            if(left <= right)
            {
                for(int i = bottom; i >= top; i--)
                {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1)