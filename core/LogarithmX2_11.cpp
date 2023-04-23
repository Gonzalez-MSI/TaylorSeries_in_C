#include <stdio.h>
#include <math.h>

int main(){

    FILE *fptr;
    float x,logarithm,j,power;
    int i,number_of_terms;

    fptr=fopen("LogarithmX2_11.txt","w");
    do{
        printf("Ingrese el valor de x: ");
        scanf("%f",&x);
    }while(x<-1||x>=1);

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1 || number_of_terms>10000);

    for(i=0,j=0,power=1,logarithm=0;i<number_of_terms,
    power<number_of_terms;i++,j++,power++){

        logarithm+=((pow(x,power))/(2*j+1));
        fprintf(fptr,"%i    %.4f\n",i,logarithm);
    }
    fclose(fptr);
    printf("%f",logarithm);
}