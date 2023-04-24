#  Operators in C (S1)

###### Outline by: Diego Gonzalez Ayala

What is the output of the following C program fragment? Assume size of integer is **4 bytes**

```c
//Problem 1.

#include <stdio.h>

int main(){

    int i = 5;
    int variable = sizeof(i++);

    printf("%d, %d",i, variable);

    return 0;
}
```
```
Options:
(a) 5, 4
(b) 6, 4
(c) 5, 5
(d) 5, 8
```

**According to the C99 standard:**

> **Note:** C standard is the language specification which is adopted by all C compilers across the world
> 
The **sizeof** operator yields the size (in bytes) of its operand, which may be an expression or a parenthesized name of a type. The size is determined from the type of the operand. If the type of the operand is a **variable lenght array type**, then **the operand is evaluated;** otherwhise, **the operand is not evaluated** and the result is an integer constant.

Therefore, **i++** inside **sizeof operator** is not evaluated and the correct answer to the problem is:
```
(c) 5, 4
```


> This outline is based on C programming lectures by Neso Academy, visit the following video to learn more.

<a href="https://www.youtube.com/watch?v=HAKAhma7MQg&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=34">Operators in C - Neso Academy</a>



