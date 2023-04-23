#include <stdio.h>


int main(){

    // ? Question 1
    printf("\nlength = %d",printf("%s","Hello World!"));
    
    // ? Question 2
    printf("\n%10s","Hello");

    // ? Question 3
    char c = 255;
    c = c + 10;
    printf("\n%d\n",c);

    // ? Question 4
    signed x;         
    unsigned y;   // * All of this representations are valid for integers
    long z;
    long long w;

    // ? Question 5
    
    unsigned j = 1;
    int k = -4;
    printf("%u",j+k);

    // ? integer range

    int range = 2147483648;
    printf("\n%d",range*2);

    return 0;
}