#include <stdio.h>
#define UPPER_LIMIT 15000

int main(){

    float one_eight_of_pi_squared,j;
    int nth_terms,i;

    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%i",&nth_terms);
    }while(nth_terms<0 || nth_terms>UPPER_LIMIT);

    for(i=0,j=0;i<nth_terms;i++,j++){

        one_eight_of_pi_squared+=(1/((2*j+1)*(2*j+1)));
    }
    printf("pi^2/8 = %f",one_eight_of_pi_squared);
}   