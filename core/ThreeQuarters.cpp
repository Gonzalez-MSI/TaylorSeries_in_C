#include <stdio.h>
int main(){

    float three_quarters,j,k;
    int nth_terms,i;

    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%i",&nth_terms);
    }while(nth_terms<0);

    for(i=0,j=1,k=3;i<nth_terms;i++,j++,k++){

        three_quarters+=(1/((j)*(k)));
    }
    printf("3/4 = %f",three_quarters);
}