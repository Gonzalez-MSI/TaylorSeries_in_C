#include <stdio.h>
 
 long int Factorial(int number){

    if(number == 0) {

        number = 1;
    }else {

        number = number * Factorial(number - 1);
 } 

    return number;
}

int main() {

    int number;
    printf("Enter a number: ");
        scanf("%d",&number);

    printf("%d! = %ld",number,Factorial(number));
    return 0;
}
