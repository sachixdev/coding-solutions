# Floyd's triangle

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number  **n**, print Floyd's triangle with n lines.

Floyd’s Triangle is a pattern of consecutive natural numbers arranged in rows, where the i-th row contains i numbers.

 **Examples:** 

```
Input: n = 4
Output:
1
2 3
4 5 6
7 8 9 10
Explanation: The triangle has 4 rows. Numbers start from 1 and increase sequentially across rows, and each row i contains i elements.
```

```
Input: n = 5 
Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Explanation: The triangle has 4 rows, and each row i contains i numbers.
```

 **Constraints:** 
1 <= n <= 100

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T18:30:03.695Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;

    // code here
    for(int i = 1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<< num<<" ";
            num++;
        }
        cout<<endl;
        
    }

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/floyds-triangle1222/1)