# Max  Rectangle

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given a 2D binary matrix  **mat[][]**, where each cell contains either 0 or 1. Find the maximum area of a rectangle that can be formed using only 1's within the matrix.

 **Examples:** 

```
Input: mat[][] = [[0, 1, 1, 0], [1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 0, 0]]
Output: 8
Explanation: The largest rectangle of 1's highlighted in green, matching the area of 2 * 4 = 8.

```

```
Input: mat[][] = [[0, 1, 1], [1, 1, 1], [0, 1, 1]]
Output: 6
Explanation: The largest rectangle of 1's highlighted in green, matching the area of 3 * 2 = 6.

```

 **Constraints:** 
1 ≤ mat.size(), mat[i].size() ≤ 1000
0 ≤ mat[][] ≤ 1

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T04:52:29.925Z  

```cpp
class Solution {
  public:

    int largestHistogram(vector<int>& heights) {

        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for(int i = 0; i <= n; i++) {

            int currHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > currHeight) {

                int height = heights[st.top()];
                st.pop();

                int width;

                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }

    int maxArea(vector<vector<int>> &mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<int> heights(m, 0);
        int ans = 0;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(mat[i][j] == 1)
                    heights[j]++;
                else
                    heights[j] = 0;
            }

            ans = max(ans, largestHistogram(heights));
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/max-rectangle/1)