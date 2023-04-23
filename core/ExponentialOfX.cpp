#include <stdio.h>
int main(){

    FILE *fptr;
    float x,factorial,exponential_of_x,j;
    double power_of_x;
    int nth_terms, i;

    fptr=fopen("ExponentialOfX.txt","w");
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    printf("Ingrese el numero de terminos: ");
    do{
        scanf("%i",&nth_terms);
    }while(nth_terms<1);
    
    for(i=1,power_of_x=1,factorial=1;i<nth_terms;i++){

        factorial*=(x/i);
        power_of_x+=factorial;
        fprintf(fptr,"%d    %.4f\n      ",i,power_of_x);
    }
    fclose(fptr);
    printf("e^(%f) = %f\n",x,power_of_x);
}