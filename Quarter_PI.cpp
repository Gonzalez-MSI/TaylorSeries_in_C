#include <stdio.h>
#define UPPER_LIMIT 100000

int main(){

    float quarter_of_pi,j;
    int nth_terms,i;

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%i",&nth_terms);
    }while(nth_terms<0 || nth_terms>UPPER_LIMIT);

    for(i=0,j=0;i<nth_terms;i++,j++){

        i%2==0?quarter_of_pi+=(1/(2*j+1)):quarter_of_pi-=(1/(2*j+1));
        printf("[%i]- %f\n",i,quarter_of_pi);
    }
    printf("pi/4 = %f",quarter_of_pi); 
}