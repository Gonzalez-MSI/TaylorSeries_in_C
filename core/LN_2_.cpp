#include <stdio.h>

int main(){

    float natural_logarithm,j;
    int nth_terms,i;

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%i",&nth_terms);
    }while(nth_terms<1);

    for(i=0,j=1;i<nth_terms;i++,j++){

        i%2==0?natural_logarithm+=(1/j):natural_logarithm-=(1/j);
        
        
    }
    printf("ln(2) = %f",natural_logarithm); 
}

