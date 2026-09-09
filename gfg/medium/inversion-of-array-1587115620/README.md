# Count Inversions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**. You have to find the Inversion Count of the array. Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
```

```
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
```

```
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T18:41:31.685Z  

```cpp
class Solution {
  public:

    long long merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        long long cnt = 0;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left++]);
            }
            else {
                temp.push_back(arr[right++]);

                cnt += (mid - left + 1);
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left++]);
        }

        while (right <= high) {
            temp.push_back(arr[right++]);
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return cnt;
    }

    long long mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high) return 0;

        int mid = low + (high - low) / 2;

        long long cnt = 0;

        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);

        return cnt;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)