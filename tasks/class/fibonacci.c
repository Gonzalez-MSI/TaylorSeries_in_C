#include <stdio.h>


int Fibonacci(int n){

    if(n <= 1) {
        
        return n;
    }else {

        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}   

int main() {

    int n;
    printf("X_");
        scanf("%d", &n);

    printf("Fibonacci = %d", Fibonacci(n));

    return 0;
}