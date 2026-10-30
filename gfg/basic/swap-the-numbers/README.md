# Swap Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two numbers  **a**  and  **b**, you need to swap their values so a holds the value of b and b holds the value of a.

**Examples :
**

```
Input: a = 1 b = 2
Output: 2 1
Explanation: Initially a = 1 and b = 2, now a = 2 and b = 1.

```

```
Input: a = 6 b = 7  
Output: 7 6 
Explanation: Initially a = 6 and b = 7, now a = 7 and b = 6.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T03:51:37.353Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Swap logic using std::swap
    swap(a, b);

    cout << a << " " << b;
    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/swap-the-numbers/1)