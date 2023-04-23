#include <stdio.h>
#include <math.h>
#define pi 3.1415927
double Factorial(int);

int main(){

    FILE *fptr;
    float x, sinh_x, power, j;
    int number_of_terms,i;

    fptr=fopen("sinh_x.txt","w");
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    printf("Ingrese el numero de terminos: ");
    scanf("%d",&number_of_terms);

    for(i=0,j=0,power=0;i<number_of_terms,power<number_of_terms,
    j<=number_of_terms;i++,power++,j++){

        sinh_x+=((pow(((x*pi/180)),(2*power+1)))/(Factorial(j)));

        fprintf(fptr,"%d    %f\n",i,sinh_x);
    }
    
    fclose(fptr);
    printf("sinh(x) = %f",sinh_x);
}

double Factorial(int j){

    int k;
    double factorial=1;

    for(k=1;k<=2*j+1;k++){
        
        factorial*=k;
    }
    return factorial;
}