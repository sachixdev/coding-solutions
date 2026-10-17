# Word in Grid - All Occurrences

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a 2D grid  **mat[][]**  of size **n × m**  consisting of characters and a string  **word**, find all starting positions where the word occurs in the grid.

- The word can be formed from any cell by moving in any of the 8 directions (2 horizontal, 2 vertical, and 4 diagonal) in a straight line without changing direction.
- Each cell can be used at most once per occurrence.
- Return all unique starting coordinates in lexicographically smallest order.

 **Examples :** 

```
Input: mat[][] = {{a,b,a,b},{a,b,e,b},{e,b,e,b}}, word = "abe"
Output: {{0,0}, {0,2}, {1,0}}
Explanation: From (0,0) we can find "abe" in right-down diagonal. From (0,2) we can find "abe" in left-down diagonal. From (1,0) we can find "abe" in horizontally right direction.

```

```
Input: mat[][] = {{G,E,E,K,S,F,O,R,G,E,E,K,S}, {G,E,E,K,S,Q,U,I,Z,G,E,E,K}, {I,D,E,Q,A,P,R,A,C,T,I,C,E}}, word = "GEEKS"
Output: {{0,0}, {0,8}, {1,0}}
Explanation: From (0,0) we can find "GEEKS" horizontally right. From (0,8) we can find "GEEKS" horizontally right. From (1,0) we can find "GEEKS" horizontally right. 

```

 **Constraints:** 
1 <= n <= m <= 50
1 <= |word| <= 20

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T06:26:34.925Z  

```cpp
class Solution {
public:
    vector<vector<int>> searchWord(vector<vector<char>> grid,
                                   string word) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> ans;

        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != word[0])
                    continue;

                for (int d = 0; d < 8; d++) {
                    int x = i, y = j;
                    int k;

                    for (k = 0; k < word.size(); k++) {
                        if (x < 0 || x >= n ||
                            y < 0 || y >= m ||
                            grid[x][y] != word[k]) {
                            break;
                        }

                        x += dx[d];
                        y += dy[d];
                    }

                    if (k == word.size()) {
                        ans.push_back({i, j});
                        break; // Avoid duplicate starting coordinates
                    }
                }
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-the-string-in-grid0111/1)