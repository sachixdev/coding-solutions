# EXPRIZE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Prize Ladder

You are given an integer $N$.

Find the largest $K$ for which there exist integers $1 \leq a_1 < a_2 < \cdots < a_K$ such that

$a_1 + a_2 + \cdots + a_K = N \quad \text{and} \quad a_{i+1} - a_i \geq i \text{ for all } 1 \leq i < K.$

### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line containing one integer $N$.
### Output Format

For each test case, output on a new line the largest $K$.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 10^{18}$
### Sample 1:
Input
Output

```
5
14
1
6
7
1000000000000000000

```

```
4
1
2
3
1817120
```

### Explanation:

Test case $1$: $14 = 1 + 2 + 4 + 7$ uses $K = 4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T14:40:56.542Z  

```c_cpp

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using i128 = __int128_t;

i128 minSum(ll k) {
    return (i128)k * ((i128)k * k + 5) / 6;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll N;
        cin >> N;

        ll low = 1, high = 2000000;
        ll ans = 1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (minSum(mid) <= N) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXPRIZE)