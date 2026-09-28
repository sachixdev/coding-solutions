# LCPPAS79

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that takes a lowercase English alphabet character as input and uses a 'switch' statement to determine if it's a  **Vowel**  or  **Consonant**.

### Sample 1:
Input
Output

```
i
```

```
Vowel
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T02:31:25.206Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;

  switch(ch) {
    // Update your code below this line
    case 'a' :
        cout<<"Vowel";
        break;
    case 'e' :
        cout<<"Vowel";
        break;
    case 'i' :
        cout<<"Vowel";
        break;
    case 'o' :
        cout<<"Vowel";
        break;
    case 'u' :
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonant";




  }

  return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS79)