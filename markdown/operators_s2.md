# Operators in C (S2)

###### Outline by: Diego Gonzalez Ayala

What is the output of the following C program fragment?

```c
//Problem 2.

#include <stdio.h>

int main(){

    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d",d,c,b,a);
}
```
```
Options:
(a) 1 1 1 1 
(b) 0 1 0 0
(c) 1 0 0 1
(d) 1 1 0 1
```
**c = ++a || b++;**

| a | ++a | b | b++ |
|---|-----|---|-----|
| 1 | 2   | 1 | 1   |

T || T = T

2 || 1 = 1

**c = 1**


| a | --a | b | b-- |
|---|-----|---|-----|
| 2 | 1   | 1 | 1   |

T || T = T

1 || 1 = 1

**d = 1**

Because of short circuit, the second operand **b++ or b--2** will never get implemented.

> Short-Circuit: Programming concept in which the compiler skips the execution or evaluation of some sub-expressions in a logical expression. Short-Circuit occurs as soon as the value of expression is determined.

Therefore, the correct answer to the problem is:

```
(a) 1 1 1 1 
```

> This outline is based on C programming lectures by Neso Academy, visit the following video to learn more.

<a href="https://www.youtube.com/watch?v=-QXh0y__tYY&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=35">Operators in C - Neso Academy</a>

> To learn more about short-circuiting in C, visit the following website.

<a href="https://www.geeksforgeeks.org/short-circuit-evaluation-in-programming/">Short-Circuit in Programming - GeeksforGeeks</a>
