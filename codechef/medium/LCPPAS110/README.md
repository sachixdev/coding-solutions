# LCPPAS110

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that uses a do-while loop to find the factorial of a given number.

### Sample 1:
Input
Output

```
5
```

```
120
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T02:42:32.007Z  

```c_cpp
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n ;
    int i = 1;
    int fact = 1;
	cin >> n;
	do{
	    fact = fact*i;
	    i++;
	    
	    
	}while(i<=n);
	cout<<fact;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS110)