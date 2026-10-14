# BLUEBLACK

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Blue and Black Pens

Chef is particular about the colour of the pens he uses to write in any exam.

He needs either:

- $3$ blue pens, or
- $1$ blue pen and $1$ black pen.

One blue pen costs $A$ rupees, and one black pen costs $B$ rupees. Find the minimum cost Chef has to pay.

### Input Format
- The first and only line contains $2$ integers - $A$ and $B$.
### Output Format

Output the minimum cost Chef has to pay to buy pens satisfying his requirement.

### Constraints
- $10 \le A, B \le 50$
### Sample 1:
Input
Output

```
10 10

```

```
20
```

### Explanation:

Chef can buy one blue and one black pen for a cost of $20$.

### Sample 2:
Input
Output

```
10 50

```

```
30

```

### Explanation:

Chef can buy $3$ blue pens for a cost of $30$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T14:42:48.867Z  

```c_cpp

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int option1 = 3 * A;  // Buy 3 blue pens
    int option2 = A + B;  // Buy 1 blue and 1 black pen

    cout << min(option1, option2) << endl;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BLUEBLACK)