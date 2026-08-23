# ARMSTRONGNUM

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Armstrong Number

Given a number x, determine whether the given number is Armstrong number or not.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of one line of input x Number
### Output Format

Print "Yes" if number is armstrong else print"No" in new line.

### Sample 1:
Input
Output

```
4
371
45
123
41
```

```
Yes
No
No
No

```

### Explanation:

 **Testcase1** : 3  *3*  3 + 7  *7*  7 + 1  *1*  1=371

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T18:07:20.301Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    int num;
	    int originalnum;
	    int r;
	    int digits = 0;
	    int result =0;
    	cin>>num;
    	originalnum = num;
    	while(originalnum!=0){
    	    originalnum/=10;
    	    digits++;
    	}
    // 	cout<<digits;
    	originalnum = num;
    	while(originalnum!=0){
    	    r= originalnum%10;
    	    result+= pow(r,digits);
    	    originalnum /=10;
    	}
    // 	cout<<result;
    	if(result == num){
    	    cout<<"Yes"<<endl;
    	}
    	else{
    	    cout<<"No"<<endl;
    	}
	
	}
	return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ARMSTRONGNUM)