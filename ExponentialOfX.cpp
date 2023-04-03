#include <stdio.h>

int main(){

    float x,factorial,exponential_of_x,j;
    double power_of_x;
    int nth_terms, i;

    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%i",&nth_terms);
    }while(nth_terms<1);
    
    for(i=1,power_of_x=1,factorial=1;i<nth_terms;i++){

        factorial*=(x/i);
        power_of_x+=factorial;
    }
    printf("e^(%f) = %f",x,power_of_x);
}