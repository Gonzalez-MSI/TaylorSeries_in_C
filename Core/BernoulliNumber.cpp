#include <stdio.h>
#include <math.h>
#define pi 3.1415927
double Factorial(int);

int main(){

    FILE *fptr;
    float x, bernoulli, power, j;
    int number_of_terms,i;

    fptr=fopen("bernoulli.txt","w");
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,j<number_of_terms;
    i++,j++,power++){

        bernoulli+=((Factorial(2*j))/(pow(2,2*j+1-1)))*(1/pow((2*power+1),(2*power)));

        fprintf(fptr,"%d bernoulli=%f\n",i,bernoulli);
    }
    fclose(fptr);
    printf("bernouli = %f",bernoulli);
}

double Factorial(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j;k++){
        
        factorial*=k;
    }
    return factorial;
}
