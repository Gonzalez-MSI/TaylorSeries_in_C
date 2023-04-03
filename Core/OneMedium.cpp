#include <stdio.h>
#define UPPER_LIMIT 10000

int main(){

    float one_medium,j,k;
    int nth_terms,i;

    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%i",&nth_terms);
    }while(nth_terms<0 || nth_terms>UPPER_LIMIT);

    for(i=0,j=0,k=j+1;i<nth_terms;i++,j++,k++){

        one_medium+=(1/((2*j+1)*(2*k+1)));
    }
    printf("1/2 = %f",one_medium);
}