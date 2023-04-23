#include <stdio.h>
int main(){
    
    FILE *fptr;
    int number_of_terms;
    int i,j,c,k;
    float x,factorial,exponential,power;

    fptr=fopen("LastExponential.txt","w");

    printf("Ingrese el valor de x: ");
    scanf("%f", &x);
    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d", &number_of_terms);
    }while(number_of_terms<1);
    
    for(k=1, c=1, i=1, exponential=0, factorial=1; k<=number_of_terms, 
    i<=number_of_terms; k++,i++){

            power=k*k;
            factorial*=(x/i);
            exponential+= factorial*power;
            fprintf(fptr,"%d    %.4f\n",i,exponential);
    }
    fclose(fptr);
    printf("\n\n(x+x^2)*exp(x) = %f\n",exponential);
}