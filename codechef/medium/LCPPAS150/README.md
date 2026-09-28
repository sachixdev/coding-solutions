# LCPPAS150

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that Accepts the count of test cases t, then for each test case, reads an integer num, checks if it's even using the isEven function, and outputs "Even" or "Odd" accordingly

### Sample 1:
Input
Output

```
3
2
6
5
```

```
Even
Even
Odd
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T03:09:26.251Z  

```c_cpp

#include <iostream>
using namespace std;


int main() {
    // Complete the code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        if(n%2 == 0){
            cout<<"Even"<<endl;
        }
        else{
            cout<<"Odd"<<endl;
        }
    }
    
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS150)