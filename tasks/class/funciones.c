#include <stdio.h>

float Power(float x, int n) {

    int i, direction;
    float power_of_x;
    
    for(i = 0, power_of_x = 1, direction = n > 0; i < n; i++){

        power_of_x *= (direction > x) ? power_of_x: (1 / x);
    }

    return power_of_x;
}

long int Factorial(int n) {

    int i;
    long int factorial = 1;

    for(i = 0; i < n; i++) {

        factorial *= (i + 1);

    }

    return factorial;
}

float Exponential(float x, int n) {

    int i;
    float exponential;
    
    for(i = 0, exponential = 1; i < n; i++) {

        exponential += (Power(x, i)/Factorial(i));
    }

    return exponential;
}


int main(){

    int n;
    float x;

    printf("Ingrese el valor de x: ");
        scanf("%f", &x);

    printf("Ingrese el valor de n: ");
        scanf("%d", &n);

    printf("%f ^ {%d} = %f\n ",x,n,Power(x,n));


    return 0;
}