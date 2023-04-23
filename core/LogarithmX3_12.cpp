#include <stdio.h>
#include <math.h>

int main(){

    FILE *fptr;
    float x,logarithm,j;
    int i,number_of_terms,power;

    fptr=fopen("LogarithmX3_12.txt","w");
    printf("Ingrese el valor de x: ");
    do{
        
        scanf("%f",&x); 
    }while(x<0);

    printf("Ingrese el numero de terminos: ");
    do{
        
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);

    for(i=0,j=0,power=0,logarithm=0;i<number_of_terms,
    power<number_of_terms;i++,j++,power++){

        logarithm+=(1/(2*j+1))*((pow(((x-1)/(x+1)),((2*power)+1))));
        fprintf(fptr,"%d    %.4f\n",i,2*logarithm);
    }
    fclose(fptr);
    printf("\n\n%f",2*logarithm);
}