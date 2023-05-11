# Basics of Recursion in C

> Definition: Recursion is a process in which a function call itself directly or indirectly.

##### Simple Example
```c

int fun(){
    ...
    fun()

}
```

## Program to demonstrate recursion

```c

int fun(int n){

    if(n==1)
        return 1;
    else
        return 1 + fun(n-1);
}

int main(){
    
    int n = 3;
    printf("%d", fun(n));

    return 0;
}

```

|main()|fun(3)|fun(2)|fun(1)|
|:----:|:----:|:----:|:----:|
|n = 3 | n = 3| n = 2| n = 1|
