# FUMI

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Fumigation

Chef's house has $N$ rooms, which for some reason are arranged in a row. The rooms are numbered $1$ to $N$, from left to right.

Chef is dealing with a pest problem, and so has no choice but to fumigate his house.

A fumigation machine has three parameters: the distance it can travel, $X$; its spraying strength, $Y$; and its linger period, $Z$.
A fumigation machine with parameters $(X, Y, Z)$ behaves as follows:

- It will start at room $1$.
- Then, every second, repeat the following: Suppose the machine is currently at position $p$. It will move to some position $q \in [1, N]$ such that $|p-q| \le X$. Then, it will spray fog into rooms $q, q+1, \ldots, \min(N, q+Y-1)$. The sprayed fog will remain in these rooms for the next $Z$ seconds, i.e. if the spraying was done at time $t$ then it will be present at times $t, t+1, \ldots, t+Z-1$.

Chef thinks his house is  *safe*  if there exists an instant of time in which  **every**  room contains fog, simultaneously.

Buying a powerful machine naturally costs more.
In particular, you are given three parameters $A, B,$ and $C$; meaning that buying a machine with parameters $(X, Y, Z)$ costs $AX + BY + CZ$ coins.

Find the minimum number of coins Chef must spend in order to buy a machine that can possibly result in his house being  *safe*, if the movements of the machine are made optimally.

Note that each of $X, Y,$ and $Z$ must be  **positive integers**  for the bought machine.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing four space-separated integers $N, A, B, C$.
### Output Format

For each test case, output on a new line the minimum cost of making Chef's house safe.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 2\cdot 10^6$
- $1 \le A, B, C \le 10^9$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^6$.
### Sample 1:
Input
Output

```
5
1 4 7 3
2 1 1 1
5 1 2 2
5 1 4 3
12 7 9 4

```

```
14
4
12
19
56

```

### Explanation:

 **Test case $1$:**  There's only one room. Choose $(X, Y, Z) = (1, 1, 1)$ and immediately spray fog into room $1$ since we start there. This has a cost of $4+7+3 = 14$, and is clearly minimum since we're constrained to have $X, Y, Z \ge 1$.

 **Test case $2$:**  There are two rooms. One solution is to choose $(X, Y, Z) = (1, 1, 2)$ and do the following:

- Second $1$: spray in room $1$. Since $Y = 1$ only this room is sprayed. Since $Z = 2$, this room will have fog in it for the next $2$ seconds.
- Second $2$: move and spray room $2$. Room $2$ now has fog, and room $1$ still has fog; so we're done.

The cost of this is $1+1+1\cdot 2 = 4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T16:18:47.487Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N, A, B, C;
        cin >> N >> A >> B >> C;

        long long ans = (long long)4e18;

        for (long long x = 1; x <= N; x++) {

            vector<long long> ys;

            ys.push_back(1);
            ys.push_back(N);

            for (long long k = 0; ; k++) {
                long long y = N - k * x;
                if (y < 1) break;

                ys.push_back(y);
                ys.push_back(y - 1);
            }

            for (long long y : ys) {
                if (y < 1 || y > N) continue;

                long long m;

                if (y >= N) {
                    m = 1;
                } else {
                    m = (N - y + x - 1) / x + 1;
                }

                long long cost = A * x + B * y + C * m;
                ans = min(ans, cost);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FUMI)