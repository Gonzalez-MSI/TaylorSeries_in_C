#include <stdio.h>
#include <math.h>

int main(){

    FILE *fptr;
    float x,logarithm;
    int i,j,number_of_terms,power;

    fptr=fopen("Logarithm_10.txt","w");
    do{
        printf("Ingrese el valor de x: ");
        scanf("%f",&x);
    }while(x<-1||x>1);

    do{
        printf("Ingrese el numero de terminos: ");
        scanf("%d",&number_of_terms);
    }while(number_of_terms<1);

    for(i=0,j=1,power=1,logarithm=0;i<=number_of_terms,
    power<=number_of_terms;i++,j++,power++){

        i%2?logarithm-=((pow(x,power))/j):logarithm+=((pow(x,power))/j);
        fprintf(fptr,"%d     %.4f\n",i,logarithm);
    }
    fclose(fptr);
    printf("%f",logarithm);
}