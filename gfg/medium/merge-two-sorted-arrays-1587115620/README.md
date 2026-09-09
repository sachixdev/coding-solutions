# Merge Without Extra Space

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]**  and  **b[]** of size  **n** and  **m** respectively, the task is to merge them in sorted order without using any  **extra space**. Modify  **a[]**  so that it contains the first  **n**  elements and modify  **b[]**  so that it contains the last  **m**  elements.

 **Examples:** 

```
Input: a[] = [2, 4, 7, 10], b[] = [2, 3]
Output: a[] = [2, 2, 3, 4], b[] = [7, 10]
Explanation: After merging the two non-decreasing arrays, we get, [2, 2, 3, 4, 7, 10]
```

```
Input: a[] = [1, 5, 9, 10, 15, 20], b[] = [2, 3, 8, 13]
Output: a[] = [1, 2, 3, 5, 8, 9], b[] = [10, 13, 15, 20]
Explanation: After merging two sorted arrays we get [1, 2, 3, 5, 8, 9, 10, 13, 15, 20].

```

```
Input: a[] = [0, 1], b[] = [2, 3]
Output: a[] = [0, 1], b[] = [2, 3]
Explanation: After merging two sorted arrays we get [0, 1, 2, 3].
```

 **Constraints:** 
1 ≤ n, m ≤ 105
0 ≤ a[i], b[i] ≤ 107

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T18:36:01.068Z  

```cpp
class Solution {
  public:

    int nextGap(int gap) {
        if (gap <= 1) return 0;
        return (gap / 2) + (gap % 2);
    }

    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();

        int gap = nextGap(n + m);

        while (gap > 0) {
            int i, j;

            // Compare elements in first array
            for (i = 0; i + gap < n; i++) {
                if (a[i] > a[i + gap])
                    swap(a[i], a[i + gap]);
            }

            // Compare elements between arrays
            for (j = (gap > n) ? gap - n : 0; i < n && j < m; i++, j++) {
                if (a[i] > b[j])
                    swap(a[i], b[j]);
            }

            // Compare elements in second array
            if (j < m) {
                for (j = 0; j + gap < m; j++) {
                    if (b[j] > b[j + gap])
                        swap(b[j], b[j + gap]);
                }
            }

            gap = nextGap(gap);
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1)