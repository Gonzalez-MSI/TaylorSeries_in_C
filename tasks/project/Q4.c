#include <stdio.h>
#define sum(x, y) x+y
#define multiply(x, y) x*y
#define division(x, y) x/y

int main(){

    int x = 500;
    int y = 500;

    printf("sum(x, y) = %d\n",sum(x, y));
    printf("multiply(x, y) = %d\n",multiply(x, y));
    printf("division(x, y) = %d\n",division(x, y));
}