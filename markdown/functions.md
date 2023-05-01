# Functions in C

###### Outlines by Diego Gonzalez Ayala

## Definition:

A function is basically a set of statements that takes inputs, performs some computation and produces an output.

## Basic Syntax:

```c
return_type function_name(set_of_inputs);
```

## Functions Usage

There are two important reasons for the usage of functions when programming in C:

* Reusability: Once the function is defined, it can be reused over and over again.
* Abstraction: If you are just using the function in your program, them you don't have to worry about how it works inside.

>Example: *scanf* &rarr; Function

```c
#include <stdio.h>
int areaOfRectangle(int, int);

int main(){

    int length = 10, width = 5, area = 0;
    area = areaOfRectangle(length,width)
    printf("%d\n",area)

    length=50, width=20;
    area = areaOfRectangle(length, width);
    printf("%d\n",area);
    return 0;
}

int areaOfRectangle(int lenght, int width){

    int area;
    area = length * width;
    return area;
}
```

> This outline is based on C programming lectures by Neso Academy, visit the following video to learn more.
> 
<a href="https://www.youtube.com/watch?v=3lqgdqoY83o&list=PLBlnK6fEyqRi0Va6znG73P52rFfXD5fhs">Functions in C - Neso Academy</a>
