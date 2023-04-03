#include <stdio.h>
#define UPPER_LIMIT 10000

int main(){
    
    int number_of_terms;
    int i,j,c,k;
    float x,factorial,exponential,power;

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d", &number_of_terms);
    }while(number_of_terms<1||number_of_terms>UPPER_LIMIT);
    
    printf("Ingrese el valor de x: ");
    scanf("%f", &x);

    for(k=1, c=1, i=1, exponential=0, factorial=1; k<=number_of_terms, 
    i<=number_of_terms; k++,i++){

            power=k*k;
            factorial*=(x/i);
            exponential+= factorial*power;
            printf("\n[%d] %f",i,exponential);
    }
    
    printf("\n\n(x+x^2)*exp(x) = %f\n",exponential);
    return 0;
}