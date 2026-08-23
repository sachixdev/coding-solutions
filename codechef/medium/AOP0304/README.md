# AOP0304

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### neon number

Write a program in C to check whether the given number is a neon number. {Hint: Sum of the digits of square of the number is the number itself, Ex: 9 –> 9^2 = 18 –> 1+8 = 9}

###Input:

- First-line will contain $T$, the number of test cases. Then the test cases follow.
- Each test case contains a single line of input, two integers $A$.

###Output: For each test case, output in a single line answers if the given number is a neon number or not.

###Constraints

- $1 \leq T \leq 1000$
- $1 \leq M \leq 100$

###Sample Input: 3 9 5 6

###Sample Output: yes no no

###EXPLANATION: if the number is a neon number return yes, else no. (small letter) neon number: if the sum of each digit in the square number is equal to the number itself then the number is called a neon number. eg: $9$: the sum of digits in the square of the number => $9$^$2$ = $18$ => $1$ +$8$ => $9$

The number itself = $9$

since the sum of digits in its square is equal to the number itself $9$ is a neon number.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T18:51:30.546Z  

```c_cpp
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int square = n * n;
        int sum = 0;

        while (square > 0) {
            sum += square % 10;
            square /= 10;
        }

        if (sum == n)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AOP0304)