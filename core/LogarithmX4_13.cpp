#include <stdio.h>
#include <math.h>

int main(){

    FILE *fptr;
    float x,logarithm,j;
    int i,number_of_terms,power;
    fptr=fopen("LogarithmX4_13.txt","w");
    
    do{
        printf("Ingrese el valor de x: ");
        scanf("%f",&x); 
    }while(x<0.5);

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);

    for(i=0,j=1,power=1,logarithm=0;i<=number_of_terms,
    power<=number_of_terms;i++,j++,power++){

        logarithm+=(1/j)*((pow(((x-1)/(x)),power)));
        fprintf(fptr,"%d    %.4f\n",i,logarithm);

    }
    fclose(fptr);
    printf("\nln(x)=%f",logarithm);
}